﻿/* Copyright (c) 2019 ExT (V.Sigalkin) */

namespace extOSC.Core
{
	// TODO: Move to Editor.
	public enum OSCConsolePacketType
	{
		Received,

		Transmitted
	}

	public class OSCConsolePacket
	{
		#region Public Vars

		public IOSCPacket Packet
		{
			get => _packet;
			set
			{
				_packet = value;
				_description = null;
			}
		}

		public OSCConsolePacketType PacketType
		{
			get => _packetType;
			set
			{
				_packetType = value;
				_description = null;
			}
		}

		public string Info
		{
			get => _info;
			set
			{
				_info = value;
				_description = null;
			}
		}

		#endregion

		#region Private Vars

		private IOSCPacket _packet;

		private OSCConsolePacketType _packetType;

		private string _info;

		private string _description;

		#endregion

		#region Public Methods

#if UNITY_EDITOR
		public override string ToString()
		{
			if (_description == null && _packet != null)
			{
				var packetDescription = string.Empty;

				if (!_packet.IsBundle())
				{
					packetDescription = $"<color=orange>Message:</color> {_packet.Address}";
				}

				if (_packet is OSCBundle bundle)
				{
					packetDescription = $"<color=yellow>Bundle:</color> (Packets: {bundle.Packets.Count})";
				}

				_description = packetDescription + "\n" + _info;
			}

			return _description;
		}
#endif

		#endregion
	}
}