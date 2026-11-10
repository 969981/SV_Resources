/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0299db74; name: FUN_0299db74
 */


void FUN_0299db74(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 long param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 local_58;
  float local_50;
  undefined8 local_4c;
  float local_44;
  undefined8 local_40;
  float local_38;
  
  nn::os::LockMutex((MutexType *)(param_4 + 0x1d8));
  lVar1 = FUN_0299dc40(param_4 + 0x170,param_5);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x38) = param_1._8_8_;
    *(long *)(lVar1 + 0x30) = param_1._0_8_;
    *(long *)(lVar1 + 0x48) = param_2._8_8_;
    *(long *)(lVar1 + 0x40) = param_2._0_8_;
    *(long *)(lVar1 + 0x58) = param_3._8_8_;
    *(long *)(lVar1 + 0x50) = param_3._0_8_;
    uVar2 = FUN_00cf8198(*(undefined8 *)(lVar1 + 0x20));
    local_44 = -param_3._8_4_;
    local_38 = -param_1._8_4_;
    local_50 = -param_2._8_4_;
    plVar3 = *(long **)(*(long *)(param_4 + 0x200) + 0x60);
    local_58 = param_2._0_8_;
    local_4c = param_3._0_8_;
    local_40 = param_1._0_8_;
    (**(code **)(*plVar3 + 0x70))(plVar3,uVar2,&local_58);
  }
  nn::os::UnlockMutex((MutexType *)(param_4 + 0x1d8));
  return;
}


