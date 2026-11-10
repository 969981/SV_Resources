/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007adac8; name: FUN_007adac8
 */


void FUN_007adac8(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  FUN_00792e30();
  param_1[0xb] = param_2;
  *param_1 = (long)(PTR_DAT_047d0d68 + 0x10);
  local_30[0] = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1 + 0xc,local_30);
  param_1[0xe] = 0;
  uVar1 = FUN_0078a12c();
  lVar2 = FUN_007bf9f0(0x30,uVar1);
  if (lVar2 != 0) {
    FUN_0078ca60(lVar2);
  }
  param_1[0xf] = lVar2;
  return;
}


