/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005f589c; name: FUN_005f589c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_005f589c(ulong *param_1,long param_2)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  size_t __n;
  byte *pbVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined1 *__dest;
  byte local_c0;
  undefined7 uStack_bf;
  undefined8 local_b0;
  long *plStack_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  long *local_88;
  byte local_80;
  undefined1 uStack_7f;
  undefined6 uStack_7e;
  ulong uStack_78;
  ulong local_70;
  long *local_68;
  
  pbVar6 = *(byte **)(param_2 + 0x18);
  if ((*pbVar6 & 1) == 0) {
    pbVar6 = pbVar6 + 1;
  }
  else {
    pbVar6 = *(byte **)(pbVar6 + 0x10);
  }
  FUN_002673a0(&local_c0,pbVar6);
  param_1[1] = uStack_98;
  *param_1 = local_a0;
  param_1[3] = (ulong)local_88;
  param_1[2] = local_90;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  if ((local_c0 & 1) != 0) {
    (**(code **)(*plStack_a8 + 0x18))
              (plStack_a8,local_b0,CONCAT71(uStack_bf,local_c0) & 0xfffffffffffffffe,1);
  }
  uVar4 = FUN_01cf7e20();
  param_1[5] = 0;
  puVar7 = param_1 + 4;
  *puVar7 = 0;
  param_1[6] = 0;
  param_1[7] = uVar4;
  puVar1 = PTR_DAT_047cc258;
  if (*(undefined **)(param_2 + 0x38) != (undefined *)0x0) {
    puVar1 = *(undefined **)(param_2 + 0x38);
  }
  FUN_00258750(param_1 + 8,puVar1);
  uVar4 = FUN_01cf7e20();
  puVar8 = param_1 + 9;
  *puVar8 = 0;
  param_1[0xb] = 0;
  param_1[0xc] = uVar4;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  pbVar6 = *(byte **)(param_2 + 0x20);
  if ((*pbVar6 & 1) == 0) {
    pbVar6 = pbVar6 + 1;
  }
  else {
    pbVar6 = *(byte **)(pbVar6 + 0x10);
  }
  plVar5 = (long *)FUN_01cf7e20();
  param_1[0x11] = (ulong)plVar5;
  __n = strlen((char *)pbVar6);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 005f5bcc to 005f5bd3 has its CatchHandler @ 005f5bd4 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((long)param_1 + 0x71);
    *(char *)(param_1 + 0xe) = (char)((int)__n << 1);
    if (__n == 0) {
      *__dest = 0;
      pbVar6 = *(byte **)(param_2 + 0x10);
      bVar2 = *pbVar6;
      goto joined_r0x005f5a18;
    }
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined1 *)(**(code **)(*plVar5 + 0x10))(plVar5,uVar4,1);
    param_1[0xe] = uVar4 | 1;
    param_1[0xf] = __n;
    param_1[0x10] = (ulong)__dest;
  }
  memcpy(__dest,pbVar6,__n);
  __dest[__n] = 0;
  pbVar6 = *(byte **)(param_2 + 0x10);
  bVar2 = *pbVar6;
joined_r0x005f5a18:
  if ((bVar2 & 1) == 0) {
    pbVar6 = pbVar6 + 1;
  }
  else {
    pbVar6 = *(byte **)(pbVar6 + 0x10);
  }
  FUN_005f6de0(&local_c0,pbVar6);
  if (((long *)param_1[7] == local_68) ||
     (uVar4 = (**(code **)(*(long *)param_1[7] + 0x20))(), (uVar4 & 1) != 0)) {
    if ((*puVar7 & 1) != 0) {
      (**(code **)(*(long *)param_1[7] + 0x18))
                ((long *)param_1[7],param_1[6],param_1[4] & 0xfffffffffffffffe,1);
      *(undefined2 *)(param_1 + 4) = 0;
    }
    param_1[6] = local_70;
    param_1[5] = uStack_78;
    *puVar7 = CONCAT62(uStack_7e,CONCAT11(uStack_7f,local_80));
    local_80 = 0;
    uStack_7f = 0;
  }
  else {
                    /* try { // try from 005f5a90 to 005f5a9b has its CatchHandler @ 005f5be4 */
    FUN_01d0e1a8(puVar7,&local_80);
  }
  if (((long *)param_1[0xc] == local_88) ||
     (uVar4 = (**(code **)(*(long *)param_1[0xc] + 0x20))(), (uVar4 & 1) != 0)) {
    if ((*puVar8 & 1) != 0) {
      (**(code **)(*(long *)param_1[0xc] + 0x18))
                ((long *)param_1[0xc],param_1[0xb],param_1[9] & 0xfffffffffffffffe,1);
      *(undefined2 *)(param_1 + 9) = 0;
    }
    param_1[0xb] = local_90;
    param_1[10] = uStack_98;
    *puVar8 = local_a0;
    local_a0 = local_a0 & 0xffffffffffff0000;
  }
  else {
                    /* try { // try from 005f5b04 to 005f5b0f has its CatchHandler @ 005f5be4 */
    FUN_01d0e1a8(puVar8,&local_a0);
  }
  iVar3 = (uint)(*(int *)(param_2 + 0x40) == 2) << 1;
  if (*(int *)(param_2 + 0x40) == 1) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0xd) = iVar3;
  if ((local_80 & 1) != 0) {
    (**(code **)(*local_68 + 0x18))
              (local_68,local_70,
               CONCAT62(uStack_7e,CONCAT11(uStack_7f,local_80)) & 0xfffffffffffffffe,1);
  }
  if ((local_a0 & 1) != 0) {
    (**(code **)(*local_88 + 0x18))(local_88,local_90,local_a0 & 0xfffffffffffffffe,1);
  }
  if ((local_c0 & 1) != 0) {
    (**(code **)(*plStack_a8 + 0x18))
              (plStack_a8,local_b0,CONCAT71(uStack_bf,local_c0) & 0xfffffffffffffffe,1);
  }
  return;
}


