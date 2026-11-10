/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02463af0; name: FUN_02463af0
 */


undefined1  [16] FUN_02463af0(int *param_1,ushort param_2,undefined4 param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  uVar3 = 0;
  switch(param_3) {
  case 1:
    if ((param_2 < *(ushort *)((long)param_1 - (long)*param_1)) &&
       (uVar2 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + (ulong)param_2), uVar2 != 0))
    {
      uVar3 = 0x3ff0000000000000;
      if (*(char *)((long)param_1 + uVar2) == '\0') {
        uVar3 = 0;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar3;
      return auVar4;
    }
    break;
  case 2:
    if ((param_2 < *(ushort *)((long)param_1 - (long)*param_1)) &&
       (uVar2 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + (ulong)param_2), uVar2 != 0))
    {
      iVar1 = (int)*(char *)((long)param_1 + uVar2);
LAB_02463b74:
      auVar5._0_8_ = (double)iVar1;
      auVar5._8_8_ = 0;
      return auVar5;
    }
    break;
  case 3:
    if ((param_2 < *(ushort *)((long)param_1 - (long)*param_1)) &&
       (uVar2 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + (ulong)param_2), uVar2 != 0))
    {
      uVar3 = (ulong)*(byte *)((long)param_1 + uVar2);
LAB_02463c94:
      auVar7._0_8_ = NEON_ucvtf(uVar3);
      auVar7._8_8_ = 0;
      return auVar7;
    }
    break;
  case 4:
    if ((param_2 < *(ushort *)((long)param_1 - (long)*param_1)) &&
       (uVar2 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + (ulong)param_2), uVar2 != 0))
    {
      iVar1 = (int)*(short *)((long)param_1 + uVar2);
      goto LAB_02463b74;
    }
    break;
  case 5:
    if ((param_2 < *(ushort *)((long)param_1 - (long)*param_1)) &&
       (uVar2 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + (ulong)param_2), uVar2 != 0))
    {
      uVar3 = (ulong)*(ushort *)((long)param_1 + uVar2);
      goto LAB_02463c94;
    }
    break;
  case 6:
    if ((param_2 < *(ushort *)((long)param_1 - (long)*param_1)) &&
       (uVar2 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + (ulong)param_2), uVar2 != 0))
    {
      iVar1 = *(int *)((long)param_1 + uVar2);
      goto LAB_02463b74;
    }
    break;
  case 7:
    if ((param_2 < *(ushort *)((long)param_1 - (long)*param_1)) &&
       (uVar2 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + (ulong)param_2), uVar2 != 0))
    {
      uVar3 = (ulong)*(uint *)((long)param_1 + uVar2);
      goto LAB_02463c94;
    }
    break;
  case 8:
    if ((param_2 < *(ushort *)((long)param_1 - (long)*param_1)) &&
       (uVar2 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + (ulong)param_2), uVar2 != 0))
    {
      auVar6._0_8_ = (double)*(long *)((long)param_1 + uVar2);
      auVar6._8_8_ = 0;
      return auVar6;
    }
    break;
  case 9:
    if ((param_2 < *(ushort *)((long)param_1 - (long)*param_1)) &&
       (uVar2 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + (ulong)param_2), uVar2 != 0))
    {
      uVar3 = *(ulong *)((long)param_1 + uVar2);
      goto LAB_02463c94;
    }
    break;
  case 10:
    if ((param_2 < *(ushort *)((long)param_1 - (long)*param_1)) &&
       (uVar2 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + (ulong)param_2), uVar2 != 0))
    {
      auVar8._0_8_ = (double)*(float *)((long)param_1 + uVar2);
      auVar8._8_8_ = 0;
      return auVar8;
    }
    break;
  case 0xb:
    if ((param_2 < *(ushort *)((long)param_1 - (long)*param_1)) &&
       (uVar2 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + (ulong)param_2), uVar2 != 0))
    {
      uVar3 = *(ulong *)((long)param_1 + uVar2);
    }
  }
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar3;
  return auVar9;
}


