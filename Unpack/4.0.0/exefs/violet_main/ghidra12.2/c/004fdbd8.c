/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004fdbd8; name: FUN_004fdbd8
 */


void FUN_004fdbd8(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  if ((int)param_1[7] == 2) {
    std::mutex::lock();
    if ((int)param_1[7] == 2) {
      if (param_1[2] == 0) {
        lVar2 = param_1[1];
        if (lVar2 == 0) {
          plVar1 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x18);
          if (plVar1 != (long *)0x0) {
            *plVar1 = 0;
            plVar1[1] = 0;
            plVar1[2] = 0;
          }
        }
        else {
          if (*(long *)(lVar2 + 0x70) != 0) {
            FUN_00520d08(lVar2,0,0x18);
          }
          plVar1 = (long *)FUN_00520544(lVar2,0x18,PTR_LAB_047cdae8);
          plVar1[1] = 0;
          plVar1[2] = 0;
          *plVar1 = lVar2;
        }
        param_1[2] = (long)plVar1;
      }
      *(undefined4 *)(param_1 + 7) = 2;
      std::mutex::unlock();
      return;
    }
  }
  else {
    if ((int)param_1[7] != 0) {
      return;
    }
    std::mutex::lock();
    if ((int)param_1[7] == 0) {
      (**(code **)(*param_1 + 0x68))(param_1);
      *(undefined4 *)(param_1 + 7) = 2;
      std::mutex::unlock();
      return;
    }
  }
  std::mutex::unlock();
  return;
}


