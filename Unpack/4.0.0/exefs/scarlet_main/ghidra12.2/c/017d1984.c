/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017d1984; name: FUN_017d1984
 */


bool FUN_017d1984(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1a0));
  if (*(long *)(param_1 + 0x180) == 0) {
    FUN_017d1e50(&local_50,*(undefined8 *)(param_1 + 0x70),param_1 + 0x78,param_2,param_1 + 0x80);
    lVar2 = local_50;
    local_50 = 0;
    lVar3 = *(long *)(param_1 + 0x180);
    *(long *)(param_1 + 0x180) = lVar2;
    if (lVar3 == 0) {
      *(undefined8 *)(param_1 + 400) = uStack_40;
      *(undefined8 *)(param_1 + 0x198) = local_38;
    }
    else {
      FUN_017d2318(param_1 + 0x188);
      *(undefined8 *)(param_1 + 400) = uStack_40;
      *(undefined8 *)(param_1 + 0x198) = local_38;
      lVar2 = *(long *)(param_1 + 0x180);
    }
    *(undefined8 *)(param_1 + 0x188) = local_48;
    if (lVar2 != 0) {
      FUN_017d1a64(lVar2,param_1 + 0x380);
      FUN_017d1ae0(*(undefined8 *)(param_1 + 0x180),param_1 + 0x400);
      FUN_017d1b5c(*(undefined8 *)(param_1 + 0x180),param_1 + 0x480);
      bVar1 = *(long *)(param_1 + 0x180) != 0;
      goto LAB_017d1a20;
    }
  }
  bVar1 = false;
LAB_017d1a20:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1a0));
  return bVar1;
}


