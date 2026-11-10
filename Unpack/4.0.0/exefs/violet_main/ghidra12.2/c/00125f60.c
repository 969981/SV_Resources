/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00125f60; name: FUN_00125f60
 */


char * FUN_00125f60(long param_1,undefined8 *param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  long lVar5;
  
  if ((*(byte *)((long)param_2 + 0x3e) >> 3 & 1) != 0) {
    *param_3 = (long)&DAT_03c1ceec;
    return "hook";
  }
  pcVar3 = (char *)0x0;
  lVar5 = *(long *)(*(long *)(*(long *)*param_2 + 0x18) + 0x40);
  iVar2 = (int)((ulong)(param_2[4] - lVar5) >> 2) + -1;
  uVar1 = *(uint *)(lVar5 + (long)iVar2 * 4);
  uVar4 = 0;
  switch(uVar1 & 0x7f) {
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x14:
    break;
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
    uVar4 = 1;
    break;
  default:
    goto switchD_00125fbc_caseD_13;
  case 0x2e:
  case 0x2f:
  case 0x30:
    uVar4 = (ulong)(uVar1 >> 0x18);
    break;
  case 0x31:
    uVar4 = 0x12;
    break;
  case 0x32:
    uVar4 = 0x13;
    break;
  case 0x34:
    uVar4 = 4;
    break;
  case 0x35:
    uVar4 = 0x16;
    break;
  case 0x36:
  case 0x46:
    uVar4 = 0x18;
    break;
  case 0x39:
    uVar4 = 5;
    break;
  case 0x3a:
  case 0x3e:
  case 0x40:
    uVar4 = 0x14;
    break;
  case 0x3b:
  case 0x3f:
  case 0x41:
    uVar4 = 0x15;
    break;
  case 0x44:
  case 0x45:
    pcVar3 = (char *)FUN_00126750(*(long *)(*(long *)*param_2 + 0x18),iVar2,uVar1 >> 7 & 0xff);
    return pcVar3;
  case 0x4c:
    *param_3 = (long)"for iterator";
    return "for iterator";
  }
  *param_3 = *(long *)(*(long *)(param_1 + 0x18) + uVar4 * 8 + 0x118) + 0x1a;
  pcVar3 = "metamethod";
switchD_00125fbc_caseD_13:
  return pcVar3;
}


