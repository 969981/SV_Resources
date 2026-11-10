/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016595d0; name: FUN_016595d0
 */


void FUN_016595d0(long *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  
  puVar1 = (undefined4 *)FUN_01053840();
  lVar2 = nn::os::GetTlsValue(*puVar1);
  if (((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) ||
     (lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8), lVar2 == 0)) {
    lVar2 = FUN_01060ed0();
  }
  param_1[1] = 0xfffffffffffffff;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = lVar2;
  return;
}


