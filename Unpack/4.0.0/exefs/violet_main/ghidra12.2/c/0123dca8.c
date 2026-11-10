/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0123dca8; name: FUN_0123dca8
 */


void FUN_0123dca8(long param_1,long *param_2,undefined4 *param_3,long *param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 local_48 [8];
  
  lVar3 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(lVar3 + 0x68) = 0;
  lVar4 = 0;
  do {
    uVar1 = (&DAT_03d6abe6)[lVar4];
    puVar2 = (undefined1 *)FUN_010af09c(lVar3);
    lVar4 = lVar4 + 4;
    *puVar2 = uVar1;
  } while (lVar4 != 0x340);
  FUN_0123dd68(*(undefined8 *)(param_1 + 8),local_48);
  *param_2 = *(long *)(param_1 + 0x10) + 0x70;
  *param_3 = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x68);
  *param_4 = *param_4 + 1;
  *(undefined1 *)(param_1 + 0xc4a5) = local_48[0];
  *(undefined1 *)(param_1 + 0xc4a3) = 0;
  return;
}


