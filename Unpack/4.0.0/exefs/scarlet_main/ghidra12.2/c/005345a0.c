/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005345a0; name: FUN_005345a0
 */


undefined8 FUN_005345a0(ulong *param_1,undefined8 param_2)

{
  ulong __n;
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  undefined1 *__dest;
  ulong uVar6;
  ulong local_58;
  ulong uStack_50;
  undefined1 *local_48;
  
  if (((byte)*param_1 & 1) == 0) {
    pbVar2 = (byte *)((long)param_1 + 1);
    uVar5 = (ulong)(byte)((byte)*param_1 >> 1);
    pbVar3 = pbVar2 + uVar5;
    if (uVar5 != 0) {
LAB_005345e8:
      pbVar4 = pbVar3;
      if (pbVar3 <= pbVar2 + 1) {
        pbVar4 = pbVar2 + 1;
      }
      do {
        if (*pbVar2 != 0x20) goto LAB_00534610;
        pbVar2 = pbVar2 + 1;
      } while (pbVar4 != pbVar2);
      pbVar2 = pbVar4;
    }
  }
  else {
    pbVar2 = (byte *)param_1[2];
    pbVar3 = pbVar2 + param_1[1];
    if (0 < (long)param_1[1]) goto LAB_005345e8;
  }
LAB_00534610:
  do {
    pbVar4 = pbVar3;
    if (pbVar4 <= pbVar2) {
      return 0;
    }
    pbVar3 = pbVar4 + -1;
  } while (pbVar4[-1] == 0x20);
  bVar1 = *pbVar2;
  *(bool *)param_2 = bVar1 == 0x2d;
  if (((bVar1 == 0x2d) || (*pbVar2 == 0x2b)) && (pbVar2 = pbVar2 + 1, pbVar4 <= pbVar2)) {
    return 0;
  }
  if (((byte)*param_1 & 1) == 0) {
    pbVar3 = (byte *)((long)param_1 + 1);
    uVar6 = (long)pbVar2 - (long)pbVar3;
    uVar5 = (ulong)(byte)((byte)*param_1 >> 1);
    if (uVar5 < uVar6) {
LAB_00534704:
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_out_of_range();
    }
  }
  else {
    uVar5 = param_1[1];
    pbVar3 = (byte *)param_1[2];
    uVar6 = (long)pbVar2 - (long)pbVar3;
    if (uVar5 < uVar6) goto LAB_00534704;
  }
  __n = uVar5 - uVar6;
  if ((ulong)((long)pbVar4 - (long)pbVar2) <= uVar5 - uVar6) {
    __n = (long)pbVar4 - (long)pbVar2;
  }
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_58 = CONCAT71(local_58._1_7_,(char)((int)__n << 1));
    __dest = (undefined1 *)((ulong)&local_58 | 1);
    if (__n == 0) {
      *__dest = 0;
      bVar1 = (byte)*param_1;
      goto joined_r0x0053474c;
    }
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar5);
    local_58 = uVar5 | 1;
    uStack_50 = __n;
    local_48 = __dest;
  }
  memcpy(__dest,pbVar3 + uVar6,__n);
  __dest[__n] = 0;
  bVar1 = (byte)*param_1;
joined_r0x0053474c:
  if ((bVar1 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,param_1[2]);
  }
  param_1[2] = (ulong)local_48;
  param_1[1] = uStack_50;
  *param_1 = local_58;
  return 1;
}


