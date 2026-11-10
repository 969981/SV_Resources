/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004e884c; name: FUN_004e884c
 */


undefined8 FUN_004e884c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  void *__src;
  undefined *puVar2;
  ulong uVar3;
  void *__dest;
  ulong *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  byte local_78 [16];
  undefined8 local_68;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = param_3;
  uStack_38 = param_4;
  uVar3 = FUN_004e9820(param_1,*(undefined8 *)(param_2 + 0xb0),&local_40);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  if ((*(byte *)(param_2 + 0x10) >> 1 & 1) == 0) {
    local_60 = 0;
    uStack_58 = 0;
    local_50 = (void *)0x0;
  }
  else {
    puVar4 = *(ulong **)(param_2 + 0xb8);
    if ((*puVar4 & 1) == 0) {
      uStack_58 = puVar4[1];
      local_60 = *puVar4;
      local_50 = (void *)puVar4[2];
    }
    else {
      uVar3 = puVar4[1];
      __src = (void *)puVar4[2];
      if (uVar3 < 0x17) {
        __dest = (void *)((ulong)&local_60 | 1);
        local_60 = CONCAT71(local_60._1_7_,(char)((int)uVar3 << 1));
      }
      else {
        if (0xffffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        uVar6 = uVar3 + 0x10 & 0xfffffffffffffff0;
        __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar6);
        local_60 = uVar6 | 1;
        uStack_58 = uVar3;
        local_50 = __dest;
      }
      memcpy(__dest,__src,uVar3 + 1);
    }
  }
  uVar3 = local_60 >> 1 & 0x7f;
  if ((local_60 & 1) != 0) {
    uVar3 = uStack_58;
  }
  if (uVar3 != 0) {
                    /* try { // try from 004e8924 to 004e892f has its CatchHandler @ 004e8b6c */
    FUN_002cdcec(&local_60,0x2e);
  }
  puVar2 = PTR_LAB_047cba48;
  if (0 < *(int *)(param_2 + 0x38)) {
    lVar7 = 1;
    do {
                    /* try { // try from 004e8954 to 004e895f has its CatchHandler @ 004e8bc8 */
      FUN_004e94c0(local_78,&local_60,
                   *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x40) + lVar7 * 8) + 0xd8));
                    /* try { // try from 004e8964 to 004e896f has its CatchHandler @ 004e8b90 */
      uVar3 = FUN_004e9924(param_1,local_78,local_40,uStack_38);
      if ((local_78[0] & 1) != 0) {
        FUN_0049e790(puVar2,local_68);
      }
                    /* try { // try from 004e899c to 004e89a3 has its CatchHandler @ 004e8b8c */
      if (((uVar3 & 1) == 0) ||
         (uVar3 = FUN_004e9cf0(param_1,*(undefined8 *)(param_2 + 0xb0),
                               *(undefined8 *)(*(long *)(param_2 + 0x40) + lVar7 * 8),local_40,
                               uStack_38), (uVar3 & 1) == 0)) goto LAB_004e8b30;
      bVar1 = lVar7 < *(int *)(param_2 + 0x38);
      lVar7 = lVar7 + 1;
    } while (bVar1);
  }
  puVar2 = PTR_LAB_047cba48;
  if (0 < *(int *)(param_2 + 0x50)) {
    lVar7 = 0;
    do {
                    /* try { // try from 004e89e0 to 004e89eb has its CatchHandler @ 004e8b84 */
      FUN_004e94c0(local_78,&local_60,
                   *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x58) + lVar7 * 8 + 8) + 0x60));
                    /* try { // try from 004e89f0 to 004e89fb has its CatchHandler @ 004e8b88 */
      uVar3 = FUN_004e9924(param_1,local_78,local_40,uStack_38);
      if ((local_78[0] & 1) != 0) {
        FUN_0049e790(puVar2,local_68);
      }
      if ((uVar3 & 1) == 0) goto LAB_004e8b30;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_2 + 0x50));
  }
  puVar2 = PTR_LAB_047cba48;
  if (0 < *(int *)(param_2 + 0x80)) {
    lVar7 = 1;
    do {
                    /* try { // try from 004e8a4c to 004e8a57 has its CatchHandler @ 004e8b80 */
      FUN_004e94c0(local_78,&local_60,
                   *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x88) + lVar7 * 8) + 0x18));
                    /* try { // try from 004e8a5c to 004e8a67 has its CatchHandler @ 004e8b7c */
      uVar3 = FUN_004e9924(param_1,local_78,local_40,uStack_38);
      if ((local_78[0] & 1) != 0) {
        FUN_0049e790(puVar2,local_68);
      }
                    /* try { // try from 004e8a94 to 004e8a9b has its CatchHandler @ 004e8b78 */
      if (((uVar3 & 1) == 0) ||
         (uVar3 = FUN_004e9dbc(param_1,*(undefined8 *)(param_2 + 0xb0),
                               *(undefined8 *)(*(long *)(param_2 + 0x88) + lVar7 * 8),local_40,
                               uStack_38), (uVar3 & 1) == 0)) goto LAB_004e8b30;
      bVar1 = lVar7 < *(int *)(param_2 + 0x80);
      lVar7 = lVar7 + 1;
    } while (bVar1);
  }
  puVar2 = PTR_LAB_047cba48;
  if (0 < *(int *)(param_2 + 0x68)) {
    lVar7 = 0;
    do {
                    /* try { // try from 004e8ad8 to 004e8ae3 has its CatchHandler @ 004e8b70 */
      FUN_004e94c0(local_78,&local_60,
                   *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x70) + lVar7 * 8 + 8) + 0x30));
                    /* try { // try from 004e8ae8 to 004e8af3 has its CatchHandler @ 004e8b74 */
      uVar3 = FUN_004e9924(param_1,local_78,local_40,uStack_38);
      if ((local_78[0] & 1) != 0) {
        FUN_0049e790(puVar2,local_68);
      }
      if ((uVar3 & 1) == 0) goto LAB_004e8b30;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_2 + 0x68));
  }
  uVar5 = 1;
joined_r0x004e8b38:
  if ((local_60 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_50);
  }
  return uVar5;
LAB_004e8b30:
  uVar5 = 0;
  goto joined_r0x004e8b38;
}


