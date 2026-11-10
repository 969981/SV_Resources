/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002f1094; name: FUN_002f1094
 */


void FUN_002f1094(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  double dVar4;
  byte local_48 [16];
  undefined8 local_38;
  byte *local_30;
  undefined *puStack_28;
  
  dVar4 = (double)FUN_0038e1a0(*(undefined8 *)(param_2 + 0x88),*(undefined8 *)(param_2 + 0x90));
  lVar2 = (long)dVar4 % 1000000;
  uVar3 = lVar2 * 4000;
  uVar1 = (ulong)((int)uVar3 + 4000000000);
  if (-1 < lVar2) {
    uVar1 = uVar3;
  }
  FUN_00394870(local_48,(long)dVar4 / 1000000 + ((long)uVar3 >> 0x3f),uVar1 & 0xffffffe0);
  puStack_28 = PTR_FUN_047cc5f8;
                    /* try { // try from 002f1118 to 002f1133 has its CatchHandler @ 002f115c */
  local_30 = local_48;
  FUN_00391b20(param_1,"JWTAccessCredentials{ExpirationTime:%s}",0x27,&local_30,1);
  if ((local_48[0] & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_38);
  }
  return;
}


