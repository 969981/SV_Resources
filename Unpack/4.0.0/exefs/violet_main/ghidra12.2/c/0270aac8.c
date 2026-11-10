/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0270aac8; name: FUN_0270aac8
 */


void FUN_0270aac8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 local_28;
  char local_4 [4];
  
  local_4[0] = '\0';
  local_28 = *(undefined8 *)(param_1 + 8);
  FUN_0270ab70(param_1,param_1 + 0x1c0,local_4,param_2,&local_28);
  if (local_4[0] != '\0') {
    lVar2 = *(long *)(param_1 + 0x208);
    lVar1 = *(long *)(param_1 + 0x210);
    if (((lVar2 != lVar1) && (*(undefined1 *)(lVar2 + 0x10) = 1, lVar2 + 0x18 != lVar1)) &&
       (*(undefined1 *)(lVar2 + 0x28) = 1, lVar2 + 0x30 != lVar1)) {
      *(undefined1 *)(lVar2 + 0x40) = 1;
      for (lVar2 = lVar2 + 0x48; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
        *(undefined1 *)(lVar2 + 0x10) = 1;
      }
    }
  }
  return;
}


