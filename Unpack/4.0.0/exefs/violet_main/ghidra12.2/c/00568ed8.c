/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00568ed8; name: FUN_00568ed8
 */


void FUN_00568ed8(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = (long)(PTR_DAT_047ce088 + 0x10);
  if ((char)param_1[0x1a] != '\0') {
    lVar4 = param_1[0x16];
    if (lVar4 != 0) {
      lVar3 = param_1[0x17];
      if (lVar3 == lVar4) {
        lVar3 = lVar4;
      }
      else {
        do {
          puVar1 = (undefined8 *)(lVar3 + -0x18);
          lVar2 = lVar3 + -0x20;
          lVar3 = lVar3 + -0x28;
          FUN_01f6f680(lVar2,*puVar1);
        } while (lVar4 != lVar3);
        lVar3 = param_1[0x16];
      }
      param_1[0x17] = lVar4;
      (**(code **)(*(long *)param_1[0x19] + 0x18))
                ((long *)param_1[0x19],lVar3,param_1[0x18] - lVar3,8);
    }
    if ((char)param_1[0x10] != '\0') {
      FUN_01cfa44c(param_1 + 0x11,param_1[0x12]);
    }
    if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
      (**(code **)(*(long *)param_1[0xf] + 0x18))
                ((long *)param_1[0xf],param_1[0xe],param_1[0xc] & 0xfffffffffffffffe,1);
    }
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 7));
  *param_1 = (long)(PTR_DAT_047ce080 + 0x10);
  nn::os::FinalizeEvent((EventType *)(param_1 + 2));
  return;
}


