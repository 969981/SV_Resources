/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a73ef8; name: FUN_01a73ef8
 */


void FUN_01a73ef8(undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4,long param_5
                 )

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  size_t __n;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  char *__s;
  void *__dest;
  undefined8 local_b0 [2];
  long local_a0 [4];
  ulong local_80;
  size_t local_78;
  void *local_70;
  undefined1 auStack_68 [16];
  undefined8 local_58;
  undefined1 local_38 [4];
  undefined4 local_34;
  
  if (*(char *)(param_2 + 0x90) == '\0') {
    if (*(long *)(param_2 + 0x78) == 0) {
      return;
    }
    if (*(short *)(*(long *)(param_2 + 0x78) + 0x1a) == 0) {
      return;
    }
  }
  puVar6 = *(undefined8 **)(param_2 + 0x88);
  if (puVar6 == (undefined8 *)0x0) {
    return;
  }
  local_34 = param_4;
  local_58 = FUN_017516e8();
  cVar1 = FUN_00f41720(&local_58);
  if (cVar1 == '\x02') {
    return;
  }
  uVar3 = FUN_0126a9c0();
  FUN_0135d328(auStack_68,uVar3,0);
  __s = *(char **)(param_5 + 8);
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_80 | 1);
    if (__n == 0) goto LAB_01a73fac;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar5);
    local_80 = uVar5 | 1;
    local_78 = __n;
    local_70 = __dest;
  }
  memcpy(__dest,__s,__n);
LAB_01a73fac:
  *(undefined1 *)((long)__dest + __n) = 0;
  FUN_016947d8(local_a0);
  local_38[0] = 3;
  if ((local_a0[0] != 0) && (FUN_011dbce8(local_b0,local_38,local_a0[0] + 8), local_a0[0] != 0)) {
    FUN_018b820c(local_b0,&local_34,local_a0[0] + 8);
  }
  local_b0[0] = param_1;
  if ((local_a0[0] != 0) && (FUN_011dbc60(local_38,local_b0,local_a0[0] + 8), local_a0[0] != 0)) {
    FUN_017528f0(local_b0,&local_80,local_a0[0] + 8);
  }
  uVar2 = FUN_011dbca0(param_2);
  local_b0[0] = CONCAT44(local_b0[0]._4_4_,uVar2);
  uVar3 = FUN_014c27b0(local_a0);
  uVar4 = FUN_014c27c8(local_a0);
  uVar5 = (**(code **)*puVar6)(puVar6,local_b0,uVar3,uVar4);
  if ((uVar5 & 1) != 0) {
    FUN_01a74108(param_2 + 0x68,param_3);
  }
  FUN_01694aa8(local_a0);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  FUN_0135d2ec(auStack_68);
  return;
}


