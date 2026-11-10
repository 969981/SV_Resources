/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0195a950; name: FUN_0195a950
 */


void FUN_0195a950(undefined1 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  long lVar3;
  byte *__src;
  long *plVar4;
  undefined1 *puVar5;
  
  puVar5 = (undefined1 *)*param_2;
  plVar4 = (long *)param_2[3];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  __src = &DAT_045e4c68;
  do {
    bVar1 = *__src;
    puVar2 = &DAT_cbf29ce484222645;
    if (bVar1 != 0) {
      lVar3 = 1;
      puVar2 = &DAT_cbf29ce484222645;
      do {
        puVar2 = (undefined1 *)(((ulong)puVar2 ^ (ulong)bVar1) * 0x100000001b3);
        bVar1 = __src[lVar3];
        lVar3 = lVar3 + 1;
      } while (bVar1 != 0);
    }
    if (puVar2 == puVar5) goto LAB_0195a9f0;
    __src = __src + 0x44;
  } while (__src != &DAT_045e54e8);
  __src = &DAT_045e54e8;
LAB_0195a9f0:
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  *param_1 = 0;
  if (__src != &DAT_045e54e8) {
    memcpy(param_1 + 2,__src,0x44);
    *param_1 = 1;
  }
  return;
}


