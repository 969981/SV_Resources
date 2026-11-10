/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00255d94; name: FUN_00255d94
 */


void FUN_00255d94(ulong *param_1,undefined8 param_2,char *param_3)

{
  long *plVar1;
  size_t __n;
  undefined8 *puVar2;
  ulong uVar3;
  void *__dest;
  ulong uVar4;
  void *pvVar5;
  ulong local_70;
  size_t local_68;
  void *local_60;
  long *local_58;
  undefined1 auStack_50 [8];
  undefined8 local_48 [3];
  
                    /* try { // try from 00255dac to 00255db3 has its CatchHandler @ 00255f88 */
  FUN_01ea15b4(auStack_50);
  plVar1 = (long *)FUN_01cf7e20();
  local_58 = plVar1;
  __n = strlen(param_3);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00255f30 to 00255f37 has its CatchHandler @ 00255f44 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_70 = CONCAT71(local_70._1_7_,(char)((int)__n << 1));
    pvVar5 = (void *)((ulong)&local_70 | 1);
    if (__n == 0) goto LAB_00255e34;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    pvVar5 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar3,1);
    local_70 = uVar3 | 1;
    local_68 = __n;
    local_60 = pvVar5;
  }
  memcpy(pvVar5,param_3,__n);
LAB_00255e34:
  *(undefined1 *)((long)pvVar5 + __n) = 0;
                    /* try { // try from 00255e38 to 00255e43 has its CatchHandler @ 00255f4c */
  puVar2 = (undefined8 *)FUN_00255f8c(auStack_50,&local_70);
  if ((local_70 & 1) != 0) {
    (**(code **)(*local_58 + 0x18))(local_58,local_60,local_70 & 0xfffffffffffffffe,1);
  }
  if (local_48 == puVar2) {
    uVar3 = FUN_01cf7e20();
    param_1[2] = 0;
    param_1[3] = uVar3;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    plVar1 = (long *)FUN_01cf7e20();
    param_1[3] = (ulong)plVar1;
    if ((puVar2[8] & 1) == 0) {
      uVar4 = puVar2[9];
      uVar3 = puVar2[8];
      param_1[2] = puVar2[10];
      param_1[1] = uVar4;
      *param_1 = uVar3;
    }
    else {
      uVar3 = puVar2[9];
      pvVar5 = (void *)puVar2[10];
      if (uVar3 < 0x17) {
        __dest = (void *)((long)param_1 + 1);
        *(char *)param_1 = (char)((int)uVar3 << 1);
      }
      else {
        if (0xffffffffffffffef < uVar3) {
                    /* try { // try from 00255f38 to 00255f3f has its CatchHandler @ 00255f40 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        uVar4 = uVar3 + 0x10 & 0xfffffffffffffff0;
        __dest = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar4,1);
        param_1[1] = uVar3;
        param_1[2] = (ulong)__dest;
        *param_1 = uVar4 | 1;
      }
      memcpy(__dest,pvVar5,uVar3 + 1);
    }
  }
  FUN_01cfa44c(auStack_50,local_48[0]);
  return;
}


