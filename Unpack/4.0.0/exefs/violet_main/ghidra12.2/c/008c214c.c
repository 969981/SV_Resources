/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008c214c; name: FUN_008c214c
 */


void FUN_008c214c(long param_1,long param_2,long param_3,undefined8 param_4,undefined4 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  FUN_008b5350(param_2,param_4,*(undefined8 *)(param_3 + 0x40),*(undefined4 *)(param_3 + 0x58));
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x18) + lVar2 + 0x10;
      if (*(code **)(param_3 + 0x48) == (code *)0x0) {
        FUN_008f0fd0(0x3f800000,param_4,*(undefined8 *)(param_2 + 0x150),0,2,0);
        FUN_00892e3c(param_2,param_4);
      }
      else {
        (**(code **)(param_3 + 0x48))(param_2,param_4,*(undefined8 *)(param_3 + 0x50));
      }
      FUN_008c1fac(param_1,param_2,param_3,param_4,
                   *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar2),lVar1);
      FUN_008c1e00(param_1,param_2,param_3,param_4,
                   *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar2),lVar1,param_5);
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x28;
    } while (lVar3 < *(int *)(param_1 + 0x10));
  }
  return;
}


