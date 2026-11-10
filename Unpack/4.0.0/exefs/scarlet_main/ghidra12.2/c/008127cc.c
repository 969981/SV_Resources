/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008127cc; name: FUN_008127cc
 */


void FUN_008127cc(undefined8 param_1,long param_2,uint *param_3,undefined4 *param_4,uint param_5)

{
  uint uVar1;
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if (((param_3 == (uint *)0x0) || (param_4 == (undefined4 *)0x0)) || (param_5 < 0x10)) {
    local_28[0] = 0x10407;
  }
  else {
    uVar1 = (*(uint *)(param_2 + 8) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 8) & 0xff00ff) << 8;
    *param_3 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_2 + 0xc) & 0xff00ff00) >> 8 |
            (*(uint *)(param_2 + 0xc) & 0xff00ff) << 8;
    param_3[1] = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_2 + 0x10) & 0xff00ff00) >> 8 |
            (*(uint *)(param_2 + 0x10) & 0xff00ff) << 8;
    param_3[2] = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_2 + 0x14) & 0xff00ff00) >> 8 |
            (*(uint *)(param_2 + 0x14) & 0xff00ff) << 8;
    param_3[3] = uVar1 >> 0x10 | uVar1 << 0x10;
    *param_4 = 0x10;
    local_28[0] = 0;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


