/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01250ee0; name: FUN_01250ee0
 */


void FUN_01250ee0(long param_1,long *param_2,undefined4 *param_3,long *param_4)

{
  undefined1 uVar1;
  byte bVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(lVar4 + 0x68) = 0;
  lVar5 = 0;
  do {
    uVar1 = (&DAT_03d6abe6)[lVar5];
    puVar3 = (undefined1 *)FUN_010af09c(lVar4);
    lVar5 = lVar5 + 4;
    *puVar3 = uVar1;
  } while (lVar5 != 0x340);
  bVar2 = FUN_0298d688(*(undefined8 *)(param_1 + 8));
  *(byte *)(param_1 + 0xc4a4) = bVar2 & 1;
  *param_2 = *(long *)(param_1 + 0x10) + 0x70;
  *param_3 = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x68);
  *param_4 = *param_4 + 1;
  return;
}


