/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0221d7c0; name: FUN_0221d7c0
 */


uint FUN_0221d7c0(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *local_20;
  ulong *local_18;
  
  if (param_1 == param_2) {
LAB_0221d8ac:
    uVar1 = 1;
  }
  else {
    local_18 = param_1;
    while( true ) {
      uVar1 = (uint)*local_18;
      if ((uVar1 >> 0xd & 1) != 0) break;
      if (((*local_18 & 1) != 0) || (local_18 = (ulong *)local_18[1], local_18 == (ulong *)0x0))
      goto LAB_0221d81c;
    }
    if (local_18 != (ulong *)0x0) {
      uVar1 = uVar1 & 0x1fff;
      local_18 = local_18 + (ulong)(byte)(POPCOUNT((char)uVar1) + POPCOUNT((char)(uVar1 >> 8))) + 2;
      goto LAB_0221d824;
    }
LAB_0221d81c:
    local_18 = (ulong *)0x0;
LAB_0221d824:
    local_20 = param_2;
    while( true ) {
      uVar1 = (uint)*local_20;
      if ((uVar1 >> 0xd & 1) != 0) break;
      if (((*local_20 & 1) != 0) || (local_20 = (ulong *)local_20[1], local_20 == (ulong *)0x0))
      goto joined_r0x0221d880;
    }
    if ((local_20 != (ulong *)0x0) &&
       (uVar2 = CONCAT44(uVar1,uVar1) & 0x1fff00001fff,
       local_20 = local_20 + (ulong)(byte)(POPCOUNT((char)uVar2) + POPCOUNT((char)(uVar2 >> 8))) + 2
       , local_18 != (ulong *)0x0)) {
      uVar1 = FUN_031dd354(&local_18,&local_20);
      goto LAB_0221d8b0;
    }
joined_r0x0221d880:
    for (; (param_2 != (ulong *)0x0 && ((*param_2 & 1) == 0)); param_2 = (ulong *)param_2[1]) {
    }
    for (; param_1 != (ulong *)0x0; param_1 = (ulong *)param_1[1]) {
      if (param_1 == param_2) goto LAB_0221d8ac;
    }
    uVar1 = 0;
  }
LAB_0221d8b0:
  return uVar1 & 1;
}


