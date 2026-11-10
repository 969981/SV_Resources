/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006d0ebc; name: FUN_006d0ebc
 */


void FUN_006d0ebc(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = (long)(PTR_DAT_047cfb28 + 0x10);
  if ((char)param_1[0x1a] != '\0') {
    puVar2 = (undefined8 *)param_1[0x16];
    param_1[0x15] = (long)(PTR_DAT_047cfc48 + 0x10);
    if (puVar2 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)param_1[0x17];
      if (puVar1 == puVar2) {
        puVar1 = puVar2;
      }
      else {
        do {
          puVar1 = puVar1 + -0x3c;
          (**(code **)*puVar1)(puVar1);
        } while (puVar2 != puVar1);
        puVar1 = (undefined8 *)param_1[0x16];
      }
      param_1[0x17] = (long)puVar2;
      (**(code **)(*(long *)param_1[0x19] + 0x18))
                ((long *)param_1[0x19],puVar1,param_1[0x18] - (long)puVar1,8);
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
  *param_1 = (long)(PTR_DAT_047cfb20 + 0x10);
  nn::os::FinalizeEvent((EventType *)(param_1 + 2));
  return;
}


