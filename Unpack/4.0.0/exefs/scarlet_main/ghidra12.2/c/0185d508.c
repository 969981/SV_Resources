/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0185d508; name: FUN_0185d508
 */


undefined1  [16] FUN_0185d508(undefined8 *param_1)

{
  uint *puVar1;
  ushort uVar2;
  int *piVar3;
  ushort *puVar4;
  undefined8 uVar5;
  ulong uVar7;
  undefined1 auVar6 [16];
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  
  piVar3 = (int *)param_1[1];
  if ((piVar3 == (int *)0x0) && (piVar3 = (int *)*param_1, piVar3 == (int *)0x0)) {
    return ZEXT816(0);
  }
  puVar4 = (ushort *)((long)piVar3 - (long)*piVar3);
  uVar5 = 0;
  uVar7 = 0;
  if ((((*puVar4 < 7) || ((ulong)puVar4[3] == 0)) ||
      (*puVar4 < 9 || *(char *)((long)piVar3 + (ulong)puVar4[3]) != '\x04')) ||
     ((ulong)puVar4[4] == 0)) goto LAB_0185d5c4;
  puVar1 = (uint *)((long)piVar3 + (ulong)puVar4[4]);
  piVar3 = (int *)((long)puVar1 + (ulong)*puVar1);
  puVar4 = (ushort *)((long)piVar3 - (long)*piVar3);
  uVar2 = *puVar4;
  if (uVar2 < 5) {
    uVar9 = 0;
LAB_0185d5d0:
    uVar8 = 0;
    uVar10 = 0;
  }
  else {
    uVar9 = 0;
    if ((ulong)puVar4[2] != 0) {
      uVar9 = *(undefined4 *)((long)piVar3 + (ulong)puVar4[2]);
    }
    if (uVar2 < 7) goto LAB_0185d5d0;
    uVar10 = 0;
    uVar8 = 0;
    if ((ulong)puVar4[3] != 0) {
      uVar8 = *(undefined4 *)((long)piVar3 + (ulong)puVar4[3]);
    }
    if ((8 < uVar2) && ((ulong)puVar4[4] != 0)) {
      uVar10 = *(uint *)((long)piVar3 + (ulong)puVar4[4]);
    }
  }
  uVar5 = CONCAT44(uVar8,uVar9);
  uVar7 = (ulong)uVar10;
LAB_0185d5c4:
  auVar6._8_8_ = uVar7;
  auVar6._0_8_ = uVar5;
  return auVar6;
}


