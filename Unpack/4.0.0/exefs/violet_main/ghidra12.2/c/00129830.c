/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00129830; name: FUN_00129830
 */


void FUN_00129830(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  if (*(byte *)(param_2 + 8) != 1 && (*(byte *)(param_2 + 8) & 0xf) != 0) {
    lVar2 = FUN_0013df20(param_1,param_2,0x18);
    if ((*(byte *)(lVar2 + 8) & 0xf) == 0) {
      puVar3 = (undefined *)
               FUN_001252e0(param_1,*(long **)(param_1 + 0x20),
                            (ulong)(param_2 - **(long **)(param_1 + 0x20)) >> 4,0);
      puVar1 = &DAT_03c1ceec;
      if (puVar3 != (undefined *)0x0) {
        puVar1 = puVar3;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00125b90(param_1,"variable \'%s\' got a non-closable value",puVar1);
    }
    lVar2 = *(long *)(param_1 + 0x40);
    while ((param_2 - lVar2 & 0xffff00000U) != 0) {
      *(long *)(param_1 + 0x40) = lVar2 + 0xffff0;
      *(undefined2 *)(lVar2 + 0xffffa) = 0;
      lVar2 = *(long *)(param_1 + 0x40);
    }
    *(short *)(param_2 + 10) = (short)((ulong)(param_2 - lVar2) >> 4);
    *(long *)(param_1 + 0x40) = param_2;
  }
  return;
}


