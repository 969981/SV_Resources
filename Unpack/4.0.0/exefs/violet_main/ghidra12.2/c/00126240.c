/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00126240; name: FUN_00126240
 */


void FUN_00126240(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0xa8) != 0) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + *(long *)(param_1 + 0xa8));
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = puVar2[-2];
    *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar2 + -1);
    lVar3 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(lVar3 + -0x10) = *puVar1;
    *(undefined1 *)(lVar3 + -8) = *(undefined1 *)(puVar1 + 1);
    lVar3 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar3 + 0x10;
    FUN_00127da0(param_1,lVar3 + -0x10,1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00126bd0(param_1,2);
}


