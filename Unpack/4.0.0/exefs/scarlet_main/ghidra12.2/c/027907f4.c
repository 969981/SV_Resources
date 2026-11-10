/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027907f4; name: FUN_027907f4
 */


bool FUN_027907f4(long param_1)

{
  ushort uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_30 [16];
  
  if ((*(long *)(param_1 + 0x1c0) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x1c0) + 0x10), lVar4 != 0)) {
    FUN_02790b94(auStack_30,lVar4 + -0x28);
    plVar2 = (long *)FUN_0278dcb0(auStack_30);
    if (plVar2 != (long *)0x0) {
      uVar3 = (**(code **)(*plVar2 + 0x10))();
      uVar1 = *(ushort *)(param_1 + 0x30);
      FUN_0278f0cc(auStack_30);
      return uVar3 == uVar1;
    }
    FUN_0278f0cc(auStack_30);
  }
  return false;
}


