/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ec570; name: FUN_007ec570
 */


char * FUN_007ec570(undefined8 param_1)

{
  char *pcVar1;
  
  pcVar1 = "KeepAlive";
  switch((uint)((ulong)param_1 >> 0x18) & 0xff) {
  case 8:
    goto switchD_007ec59c_caseD_8;
  default:
    pcVar1 = "Unknown";
switchD_007ec59c_caseD_8:
    return pcVar1;
  case 0x2c:
    return "Net";
  case 0x30:
    return "Turn";
  case 0x58:
    return "Rtt";
  case 0x65:
    return "Sync";
  case 0x68:
    return "Unreliable";
  case 0x74:
    return "Atomic";
  case 0x75:
    return "Event";
  case 0x76:
    return "BroadcastEvent";
  case 0x77:
    return "Clock";
  case 0x7b:
    return "Voice";
  case 0x7c:
    return "Reliable";
  case 0x80:
    return "BroadcastReliable";
  case 0x81:
    return "StreamBroadcastReliable";
  case 0x98:
    return "Session";
  case 0xa0:
    return "NatTraversalResult";
  case 0xa4:
    return "MonitoringData";
  case 0xac:
    return "WanNat";
  case 0xb0:
    return "Reckoning1d";
  case 0xb4:
    return "Reckoning3d";
  }
}


