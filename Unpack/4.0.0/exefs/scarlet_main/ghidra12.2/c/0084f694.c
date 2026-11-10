/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0084f694; name: FUN_0084f694
 */


long FUN_0084f694(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long local_38;
  
  puVar1 = PTR_DAT_047d1a08;
  local_38 = 0x30;
  lVar3 = (**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
  if (*(code **)(puVar1 + 0x10) != (code *)0x0) {
    (**(code **)(puVar1 + 0x10))(lVar3,"hkgpConvexHull");
  }
  FUN_0084f3cc(lVar3);
  FUN_0084f794(&local_38,*(undefined8 *)(param_1 + 0x18));
  lVar2 = local_38;
  local_38 = 0;
  lVar5 = *(long *)(lVar3 + 0x18);
  *(long *)(lVar3 + 0x18) = lVar2;
  if (lVar5 != 0) {
    FUN_0085eb5c(lVar5);
    (**(code **)(puVar1 + 8))(0,lVar5,0);
    lVar2 = local_38;
    if (local_38 != 0) {
      FUN_0085eb5c(local_38);
      (**(code **)(puVar1 + 8))(0,lVar2,0);
    }
  }
  *(long *)(*(long *)(lVar3 + 0x18) + 0x30) = lVar3;
  *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  uVar4 = 0;
  if (*(long **)(param_1 + 0x28) != (long *)0x0) {
    uVar4 = (**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
  }
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  return lVar3;
}


