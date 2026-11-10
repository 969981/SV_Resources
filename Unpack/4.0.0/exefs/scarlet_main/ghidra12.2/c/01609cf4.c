/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01609cf4; name: FUN_01609cf4
 */


bool FUN_01609cf4(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 local_8;
  
  local_8 = param_2;
  iVar2 = (**(code **)(**(long **)(param_1 + 0x60) + 0x60))
                    (*(long **)(param_1 + 0x60),param_2,*(undefined8 *)(param_3 + 8));
  if ((iVar2 == 1) &&
     (iVar2 = (**(code **)(**(long **)(param_1 + 0x60) + 0x88))
                        (*(long **)(param_1 + 0x60),&local_8,1), iVar2 == 1)) {
    iVar2 = (**(code **)(**(long **)(param_1 + 0x80) + 0x18))(*(long **)(param_1 + 0x80),local_8);
    bVar1 = iVar2 == 1;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


