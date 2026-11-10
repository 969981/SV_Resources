/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03241064; name: FUN_03241064
 */


void FUN_03241064(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  if (param_1 != 0) {
    nn::os::LockMutex(DAT_048857c0);
    plVar2 = DAT_048857c8;
    lVar3 = *(long *)(param_1 + 0x520);
    lVar4 = *(long *)(param_1 + 0x528);
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x528) = lVar4;
    }
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x520) = lVar3;
    }
    if (*plVar2 == param_1) {
      *plVar2 = lVar4;
    }
    if (plVar2[1] == param_1) {
      plVar2[1] = lVar3;
    }
    nn::os::UnlockMutex(DAT_048857c0);
    nn::os::SetTlsValue(DAT_048857a8,param_1);
    *(long *)(lVar1 + 0x1000b8) = param_1;
    FUN_03241154(param_1);
    (**(code **)(*DAT_048857d8 + 0x18))(DAT_048857d8,param_1,0x578);
  }
  nn::os::SetTlsValue(DAT_048857a8,0);
  *(undefined8 *)(lVar1 + 0x1000b8) = 0;
  return;
}


