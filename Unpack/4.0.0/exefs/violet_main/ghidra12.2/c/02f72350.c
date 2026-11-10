/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f72350; name: FUN_02f72350
 */


void FUN_02f72350(undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5
                 ,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  if ((2 < *(byte *)(param_4 + 9)) && (*(int *)(param_4 + 0x1c) != 0xaaa00)) {
    lVar3 = *(long *)(param_2 + 0x40);
    uVar1 = *(uint *)(param_4 + 0x2c);
    if ((*(uint *)(lVar3 + 0x108) & uVar1) != 0) {
      lVar4 = 0;
      puVar2 = (undefined8 *)(lVar3 + 0x118);
      do {
        if ((*(uint *)(puVar2 + -1) & uVar1) != 0) {
          (**(code **)(*(long *)*puVar2 + 0x30))
                    ((long *)*puVar2,param_2,param_3,param_6,param_7,param_8,param_9,param_4);
        }
        lVar4 = lVar4 + 1;
        puVar2 = puVar2 + 2;
      } while (lVar4 < *(int *)(lVar3 + 0x10c));
    }
  }
  return;
}


