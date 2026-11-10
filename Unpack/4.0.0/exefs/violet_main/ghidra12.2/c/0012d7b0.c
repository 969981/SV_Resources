/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0012d7b0; name: FUN_0012d7b0
 */


long FUN_0012d7b0(long param_1,long param_2,int param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    puVar2 = *(undefined8 **)(param_1 + 0x18);
    lVar1 = (*(code *)*puVar2)(puVar2[1],0,(long)param_3,param_2);
    if (lVar1 == 0) {
      puVar3 = *(undefined8 **)(param_1 + 0x18);
      if (((*(byte *)(puVar3 + 0xb) & 0xf) != 0) || (*(char *)((long)puVar3 + 0x67) != '\0')) {
LAB_0012d854:
                    /* WARNING: Subroutine does not return */
        FUN_00126bd0(param_1,4);
      }
      FUN_0012b690(param_1,1);
      lVar1 = (*(code *)*puVar3)(puVar3[1],0,(long)param_3,param_2);
      if (lVar1 == 0) goto LAB_0012d854;
    }
    puVar2[3] = puVar2[3] + param_2;
  }
  return lVar1;
}


