/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00717084; name: FUN_00717084
 */


void FUN_00717084(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  long *plVar5;
  
  switch(*(undefined4 *)(param_1 + 0x34)) {
  case 3:
    puVar1 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    if ((puVar1 != (ulong *)0x0) || (pbVar3 = *(byte **)(param_1 + 0x28), pbVar3 == (byte *)0x0))
    goto switchD_007170b4_default;
    *(undefined **)pbVar3 = PTR_DAT_047d0288 + 0x10;
    uVar2 = *(ulong *)(pbVar3 + 8);
    if ((uVar2 & 1) == 0) goto LAB_00717234;
    goto LAB_007171fc;
  case 4:
    puVar1 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    if (((puVar1 != (ulong *)0x0) ||
        (pbVar3 = *(byte **)(param_1 + 0x28), pbVar3 == PTR_DAT_047cba80)) ||
       (pbVar3 == (byte *)0x0)) goto switchD_007170b4_default;
    if ((*pbVar3 & 1) == 0) goto LAB_00717234;
    plVar5 = *(long **)(pbVar3 + 0x10);
    goto LAB_00717230;
  case 5:
    puVar1 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    if ((puVar1 != (ulong *)0x0) || (pbVar3 = *(byte **)(param_1 + 0x28), pbVar3 == (byte *)0x0))
    goto switchD_007170b4_default;
    *(undefined **)pbVar3 = PTR_DAT_047d0298 + 0x10;
    if ((pbVar3 != PTR_DAT_047d0290) && (lVar4 = *(long *)(pbVar3 + 0x10), lVar4 != 0)) {
      FUN_00513c68(lVar4);
      FUN_0049e790(PTR_LAB_047cba48,lVar4);
    }
    uVar2 = *(ulong *)(pbVar3 + 8);
    break;
  case 6:
    puVar1 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    if ((puVar1 != (ulong *)0x0) || (pbVar3 = *(byte **)(param_1 + 0x28), pbVar3 == (byte *)0x0))
    goto switchD_007170b4_default;
    *(undefined **)pbVar3 = PTR_DAT_047d0278 + 0x10;
    uVar2 = *(ulong *)(pbVar3 + 8);
    break;
  default:
switchD_007170b4_default:
    *(undefined4 *)(param_1 + 0x34) = 0;
    return;
  }
  if ((uVar2 & 1) != 0) {
LAB_007171fc:
    plVar5 = (long *)(uVar2 & 0xfffffffffffffffe);
    if ((*plVar5 == 0) && (plVar5 != (long *)0x0)) {
      if ((*(byte *)(plVar5 + 1) & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,plVar5[3]);
      }
LAB_00717230:
      FUN_0049e790(PTR_LAB_047cba48,plVar5);
    }
  }
LAB_00717234:
  FUN_0049e790(PTR_LAB_047cba48,pbVar3);
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}


