/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c7214; name: FUN_001c7214
 */


undefined8 FUN_001c7214(long param_1,long param_2,undefined8 param_3,code *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [24];
  
  if (param_2 != 0) {
    if (*(long *)(param_1 + 0xe8) != 0) {
      FUN_001dc298(param_1,5,2);
    }
    FUN_001c8d30(param_2,auStack_58);
    lVar2 = FUN_001c8d40(auStack_58);
    if (lVar2 != 0) {
      do {
        lVar4 = *(long *)(lVar2 + 0x18);
        lVar2 = FUN_001c8d40(auStack_58);
        puVar5 = *(undefined8 **)(lVar4 + 0x10);
        while (puVar5 != (undefined8 *)0x0) {
          uVar3 = *puVar5;
          puVar5 = (undefined8 *)puVar5[2];
          iVar1 = (*param_4)(uVar3,param_3);
          if (iVar1 == 1) {
            if (*(long *)(param_1 + 0xe8) != 0) {
              FUN_001dc2d8(param_1,5);
            }
            return 1;
          }
        }
      } while (lVar2 != 0);
    }
    if (*(long *)(param_1 + 0xe8) != 0) {
      FUN_001dc2d8(param_1,5);
    }
  }
  return 0;
}


