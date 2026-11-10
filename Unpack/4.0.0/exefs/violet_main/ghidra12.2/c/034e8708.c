/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034e8708; name: FUN_034e8708
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_034e8708(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  nn::os::LockMutex((MutexType *)&DAT_048b0788);
  puVar1 = PTR_DAT_047e2fd0;
  if (DAT_048b0770 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x20);
    if (puVar2 == (undefined8 *)0x0) {
      FUN_034e880c();
      if (DAT_048b0770 != (undefined8 *)0x0) goto LAB_034e877c;
      puVar2 = (undefined8 *)(**(code **)(puVar1 + 0x10))(0,0x20);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
        goto LAB_034e87c8;
      }
    }
    *puVar2 = DAT_048b0770;
    DAT_048b0770 = puVar2;
  }
LAB_034e877c:
  if (DAT_048b0768 == (undefined8 *)0x0) {
    DAT_048b0760 = DAT_048b0770;
  }
  else {
    *DAT_048b0768 = DAT_048b0770;
  }
  DAT_048b0768 = DAT_048b0770;
  puVar2 = (undefined8 *)*DAT_048b0770;
  *DAT_048b0770 = 0;
  DAT_048b0770 = puVar2;
  _DAT_048b0784 = _DAT_048b0784 + 1;
  puVar2 = DAT_048b0768 + 1;
LAB_034e87c8:
  *puVar2 = param_2;
  *(undefined4 *)(puVar2 + 1) = param_3;
  *(undefined4 *)((long)puVar2 + 0xc) = param_4;
  *(undefined4 *)(puVar2 + 2) = param_1;
  nn::os::UnlockMutex((MutexType *)&DAT_048b0788);
  return;
}


