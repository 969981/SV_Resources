/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d63690; name: FUN_01d63690
 */


void FUN_01d63690(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long local_2c0 [80];
  
  cVar3 = DAT_04831060;
  lVar4 = FUN_01d63d5c(param_2);
  lVar6 = 0;
  do {
    puVar1 = (undefined8 *)(lVar4 + lVar6);
    *(undefined8 *)((long)local_2c0 + lVar6) = *puVar1;
    *(undefined8 *)((long)local_2c0 + lVar6 + 8) = puVar1[1];
    *(undefined8 *)((long)local_2c0 + lVar6 + 0x10) = puVar1[2];
    plVar5 = (long *)puVar1[3];
    *(long **)((long)local_2c0 + lVar6 + 0x18) = plVar5;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))();
    }
    lVar6 = lVar6 + 0x20;
  } while (lVar6 != 0x280);
  uVar2 = 0x588;
  if (cVar3 == '\0') {
    uVar2 = 0xffffffffffffffff;
  }
  FUN_01d63ebc(param_1,uVar2,local_2c0);
  FUN_01d48234(local_2c0);
  return;
}


