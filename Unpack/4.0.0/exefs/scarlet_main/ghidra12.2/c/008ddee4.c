/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008ddee4; name: FUN_008ddee4
 */


undefined8 FUN_008ddee4(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((*(char *)(*(long *)(*(long *)(param_1 + 0x10) + 0xa0) + 0x752) != '\0') ||
     (lVar4 = FUN_008de4e0(*(undefined8 *)PTR_DAT_047d25d8), lVar4 == 0)) {
    return 0;
  }
  *(undefined4 *)(lVar4 + 0x88) = 0;
  *(long *)(param_1 + 8) = lVar4;
  lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x418);
  iVar1 = *(int *)(lVar5 + 0x28);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(lVar5 + 0x2c) / iVar1;
  }
  *(int *)(lVar4 + 0x74) = *(int *)(lVar5 + 0x2c) - iVar2 * iVar1;
  iVar1 = 0;
  if (*(int *)(lVar5 + 0x2c) + 1 < *(int *)(lVar5 + 0x28)) {
    iVar1 = *(int *)(lVar5 + 0x2c) + 1;
  }
  *(int *)(lVar5 + 0x2c) = iVar1;
  puVar3 = (undefined8 *)
           (*(long *)(*(long *)(param_1 + 0x10) + 0x1f0) + (long)*(int *)(param_1 + 0x20) * 0x10);
  uVar6 = *puVar3;
  *(undefined8 *)(lVar4 + 0x28) = puVar3[1];
  *(undefined8 *)(lVar4 + 0x20) = uVar6;
  return 1;
}


