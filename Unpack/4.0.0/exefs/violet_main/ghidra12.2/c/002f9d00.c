/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002f9d00; name: FUN_002f9d00
 */


long FUN_002f9d00(int *param_1,char *param_2,undefined8 *param_3)

{
  size_t __n;
  int *piVar1;
  undefined8 uVar2;
  void *__dest;
  ulong uVar3;
  char *local_108;
  undefined8 uStack_100;
  char *local_d8;
  size_t local_d0;
  char *local_a8;
  size_t local_a0;
  void *local_98;
  byte local_78 [16];
  ulong local_68;
  undefined1 auStack_60 [32];
  
  if (*param_1 != 5) {
    if (param_3 == (undefined8 *)0x0) {
      return 0;
    }
    FUN_003673f0(&local_a8,"JSON value is not an object");
    uVar2 = FUN_00351340("external/com_google_grpc_base/src/core/lib/security/util/json_util.cc",
                         0x25,&local_a8,0,0);
    *param_3 = uVar2;
    return 0;
  }
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_a8 = (char *)CONCAT71(local_a8._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_a8 | 1);
    if (__n == 0) goto LAB_002f9dd8;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar3);
    local_a8 = (char *)(uVar3 | 1);
    local_a0 = __n;
    local_98 = __dest;
  }
  memcpy(__dest,param_2,__n);
LAB_002f9dd8:
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 002f9de0 to 002f9de7 has its CatchHandler @ 002f9fb4 */
  piVar1 = (int *)FUN_0027bd44(param_1 + 8,&local_a8);
  if (((ulong)local_a8 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_98);
  }
  local_d8 = param_2;
  if (param_1 + 10 == piVar1) {
    if (param_3 == (undefined8 *)0x0) {
      return 0;
    }
    local_a8 = "Property ";
    local_a0 = 9;
    if (param_2 == (char *)0x0) {
      local_d0 = 0;
    }
    else {
      local_d0 = strlen(param_2);
    }
    local_108 = " not found in JSON object.";
    uStack_100 = 0x1a;
    FUN_00395a70(local_78,&local_a8,&local_d8,&local_108);
    uVar3 = (ulong)local_78 | 1;
    if ((local_78[0] & 1) != 0) {
      uVar3 = local_68;
    }
                    /* try { // try from 002f9ecc to 002f9eef has its CatchHandler @ 002f9fa0 */
    FUN_00367770(auStack_60,uVar3);
    uVar2 = FUN_00351340("external/com_google_grpc_base/src/core/lib/security/util/json_util.cc",
                         0x2e,auStack_60,0,0);
  }
  else {
    if (piVar1[0xe] == 4) {
      if ((*(byte *)(piVar1 + 0x10) & 1) == 0) {
        return (long)piVar1 + 0x41;
      }
      return *(long *)(piVar1 + 0x14);
    }
    if (param_3 == (undefined8 *)0x0) {
      return 0;
    }
    local_a8 = "Property ";
    local_a0 = 9;
    if (param_2 == (char *)0x0) {
      local_d0 = 0;
    }
    else {
      local_d0 = strlen(param_2);
    }
    local_108 = " n JSON object is not a string.";
    uStack_100 = 0x1f;
    FUN_00395a70(local_78,&local_a8,&local_d8,&local_108);
    uVar3 = (ulong)local_78 | 1;
    if ((local_78[0] & 1) != 0) {
      uVar3 = local_68;
    }
                    /* try { // try from 002f9f38 to 002f9f5b has its CatchHandler @ 002f9f9c */
    FUN_00367770(auStack_60,uVar3);
    uVar2 = FUN_00351340("external/com_google_grpc_base/src/core/lib/security/util/json_util.cc",
                         0x37,auStack_60,0,0);
  }
  *param_3 = uVar2;
  if ((local_78[0] & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_68);
  }
  return 0;
}


