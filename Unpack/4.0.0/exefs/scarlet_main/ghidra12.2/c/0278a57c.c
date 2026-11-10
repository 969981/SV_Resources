/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0278a57c; name: FUN_0278a57c
 */


void FUN_0278a57c(undefined8 param_1,long param_2,uint *param_3,uint param_4)

{
  ulong uVar1;
  ulong __n;
  uint uVar2;
  undefined4 local_40 [4];
  undefined4 local_18 [2];
  
  if ((param_3 != (uint *)0x0) && (4 < param_4)) {
    uVar1 = ((ulong)*param_3 << 0x20 & 0xff00ff00ff00ff00) >> 8 |
            ((ulong)*param_3 << 0x20 & 0xff00ff00ff00ff) << 8;
    uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | uVar1 << 0x10;
    __n = uVar1 >> 0x20;
    uVar2 = (uint)(uVar1 >> 0x20);
    if ((uVar2 < 0x101) && (uVar2 + 5 <= param_4)) {
      *(uint *)(param_2 + 0x14) = uVar2;
      *(uint *)(param_2 + 0x18) = (uint)(byte)param_3[1];
      memcpy((void *)(param_2 + 0x28),(void *)((long)param_3 + 5),__n);
      *(undefined1 *)(param_2 + 0x28 + __n) = 0;
      local_40[0] = 0;
      goto LAB_0278a5cc;
    }
  }
  local_40[0] = 0x10407;
LAB_0278a5cc:
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_40);
  return;
}


