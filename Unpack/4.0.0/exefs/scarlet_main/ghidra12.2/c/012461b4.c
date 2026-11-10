/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012461b4; name: FUN_012461b4
 */


undefined8 FUN_012461b4(long param_1,uint *param_2,ulong *param_3,byte param_4)

{
  ulong uVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  
  if ((*param_3 & 0x100f) == 0x1003) {
    return 0;
  }
  memset(param_2,0,0x8c);
  param_2[0x21] = 0x5400000;
  *(undefined1 *)(param_2 + 0x22) = 5;
  param_2[0x16] = 0x20;
  uVar2 = (uint)*param_3 & 0xf;
  if (uVar2 == 1) {
    param_2[1] = 1;
    *(short *)(param_2 + 4) = (short)(*param_3 >> 8);
    *(byte *)(param_2 + 2) = (byte)*param_3 >> 4;
    uVar2 = FUN_012464b0(param_1,(byte)*param_3 >> 4);
    param_2[3] = uVar2;
    *(byte *)((long)param_2 + 0x12) = (byte)(*param_3 >> 0x18) >> 1 & 1;
    goto LAB_01246264;
  }
  uVar3 = 0;
  switch(uVar2) {
  case 2:
    param_2[1] = 2;
    param_2[5] = *(uint *)((long)param_3 + 4);
    *(short *)(param_2 + 6) = (short)((uint)*param_3 >> 4);
    *(char *)((long)param_2 + 0x1a) = (char)((uint)*param_3 >> 0x14);
    break;
  case 3:
    param_2[1] = 3;
    *(byte *)(param_2 + 7) = (byte)*param_3 >> 4;
    *(byte *)((long)param_2 + 0x1d) = *(byte *)((long)param_3 + 1) & 0xf;
    *(byte *)((long)param_2 + 0x1e) = (byte)((uint)*param_3 >> 0xc) & 1;
    break;
  case 4:
    param_2[1] = 6;
    *(char *)((long)param_2 + 0x1f) = (char)((uint)*param_3 >> 4);
    *(byte *)(param_2 + 8) = (byte)((uint)*param_3 >> 0xc) & 0xf;
    *(char *)((long)param_2 + 0x21) = (char)*(undefined2 *)((long)param_3 + 2);
    break;
  case 5:
    param_2[1] = 4;
    uVar1 = *param_3;
    *(undefined1 *)(param_2 + 9) = 0;
    *(byte *)((long)param_2 + 0x23) = (byte)uVar1 >> 4 & 1;
    break;
  case 6:
    param_2[1] = 5;
    *(char *)((long)param_2 + 0x22) = (char)((uint)*param_3 >> 4);
    break;
  case 7:
    uVar2 = 7;
    goto LAB_01246364;
  default:
    goto switchD_012462e0_caseD_8;
  case 9:
    param_2[1] = 10;
    *(char *)((long)param_2 + 0x25) = (char)((uint)*param_3 >> 4);
    break;
  case 10:
    uVar2 = 8;
    goto LAB_01246364;
  case 0xb:
    uVar2 = 9;
LAB_01246364:
    param_2[1] = uVar2;
    break;
  case 0xc:
    param_2[1] = 0xb;
    *(char *)(param_2 + 10) = (char)(*param_3 >> 4);
    param_2[0xb] = *(uint *)((long)param_3 + 4);
    break;
  case 0xd:
    param_2[1] = 0xe;
    *(byte *)(param_2 + 0x10) = (byte)*param_3 >> 4;
    *(byte *)((long)param_2 + 0x41) = *(byte *)((long)param_3 + 1) & 0xf;
    *(byte *)((long)param_2 + 0x42) = (byte)((uint)*param_3 >> 0xc) & 0xf;
    *(byte *)((long)param_2 + 0x43) = (byte)(*param_3 >> 0x3c);
    *(ushort *)((long)param_2 + 0x4a) = *(byte *)((long)param_3 + 7) & 0xf;
    *(ushort *)(param_2 + 0x11) = *(ushort *)((long)param_3 + 2) & 0xfff;
    *(ushort *)((long)param_2 + 0x46) = *(ushort *)((long)param_3 + 4) & 0xfff;
    *(ushort *)(param_2 + 0x12) = (ushort)(*param_3 >> 0x2c) & 0xfff;
  }
LAB_01246264:
  if (((uint)*param_3 & 0xf) == 3) {
    lVar5 = 0;
    if (param_4 < 5) {
      lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x30) + (ulong)param_4 * 0x38 + 0x28;
    }
    plVar4 = (long *)FUN_0124c614(lVar5,(uint)*param_3 >> 4 & 0xf);
    uVar2 = 0;
    if (plVar4 != (long *)0x0) {
      uVar2 = (**(code **)(*plVar4 + 0x98))();
    }
  }
  else {
    uVar2 = (uint)param_3[1];
  }
  *param_2 = uVar2;
  *(byte *)(param_2 + 0x22) = param_4;
  *(undefined2 *)((long)param_2 + 0x89) = 0;
  *(undefined1 *)((long)param_2 + 0x8b) = 0;
  lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 400);
  uVar2 = *(uint *)(lVar5 + 8);
  if (uVar2 == 0) {
    uVar2 = 1;
    *(undefined4 *)(lVar5 + 8) = 1;
  }
  param_2[0x15] = uVar2;
  uVar3 = 1;
  *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
switchD_012462e0_caseD_8:
  return uVar3;
}


