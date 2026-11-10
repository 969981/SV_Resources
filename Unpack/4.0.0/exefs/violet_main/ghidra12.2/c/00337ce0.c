/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00337ce0; name: FUN_00337ce0
 */


void FUN_00337ce0(undefined2 *param_1,int *param_2,undefined8 *param_3)

{
  void *__src;
  byte bVar1;
  ulong *puVar2;
  int *piVar3;
  void *__dest;
  undefined8 uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong local_130;
  ulong uStack_128;
  void *local_120;
  void *local_110;
  ulong uStack_108;
  undefined *local_e0;
  undefined8 uStack_d8;
  byte *local_b0;
  ulong uStack_a8;
  undefined *local_80;
  ulong local_78;
  undefined8 local_70;
  
  if (*param_2 == 5) {
    local_80 = (undefined *)0x656369767265730e;
    local_78 = local_78 & 0xffffffffffffff00;
                    /* try { // try from 00337d3c to 00337d47 has its CatchHandler @ 0033801c */
    piVar3 = (int *)FUN_0027bd44(param_2 + 8,&local_80);
    if (((ulong)local_80 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_70);
    }
    if ((param_2 + 10 == piVar3) || (piVar3[0xe] == 0)) {
      pbVar8 = (byte *)0x0;
    }
    else {
      if (piVar3[0xe] != 4) {
        FUN_003673f0(&local_80,"field:name error: field:service error:not of type string");
        uVar4 = 0xa8;
        goto LAB_00337db0;
      }
      bVar1 = *(byte *)(piVar3 + 0x10);
      if ((bVar1 & 1) == 0) {
        uVar6 = (ulong)(bVar1 >> 1);
      }
      else {
        uVar6 = *(ulong *)(piVar3 + 0x12);
      }
      pbVar8 = (byte *)0x0;
      if (uVar6 != 0) {
        pbVar8 = (byte *)(piVar3 + 0x10);
      }
    }
    local_80 = (undefined *)0x646f6874656d0c;
                    /* try { // try from 00337e38 to 00337e43 has its CatchHandler @ 00338018 */
    piVar3 = (int *)FUN_0027bd44(param_2 + 8,&local_80);
    if (((ulong)local_80 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_70);
    }
    if ((param_2 + 10 == piVar3) || (piVar3[0xe] == 0)) {
      puVar2 = (ulong *)0x0;
    }
    else {
      if (piVar3[0xe] != 4) {
        FUN_003673f0(&local_80,"field:name error: field:method error:not of type string");
        uVar4 = 0xb6;
        goto LAB_00337db0;
      }
      puVar5 = (ulong *)(piVar3 + 0x10);
      if (((byte)*puVar5 & 1) == 0) {
        puVar2 = (ulong *)0x0;
        if ((byte)((byte)*puVar5 >> 1) != 0) {
          puVar2 = puVar5;
        }
      }
      else {
        puVar2 = (ulong *)0x0;
        if (*(long *)(piVar3 + 0x12) != 0) {
          puVar2 = puVar5;
        }
      }
    }
    if (pbVar8 != (byte *)0x0) {
      local_80 = &DAT_03bdfb3b;
      local_78 = 1;
      uStack_a8 = *(ulong *)(pbVar8 + 8);
      local_b0 = *(byte **)(pbVar8 + 0x10);
      if ((*pbVar8 & 1) == 0) {
        local_b0 = pbVar8 + 1;
        uStack_a8 = (ulong)(*pbVar8 >> 1);
      }
      local_e0 = &DAT_03bdfb3b;
      uStack_d8 = 1;
      if (puVar2 == (ulong *)0x0) {
        local_130 = local_130 & 0xffffffffffff0000;
      }
      else if ((*puVar2 & 1) == 0) {
        uStack_128 = puVar2[1];
        local_130 = *puVar2;
        local_120 = (void *)puVar2[2];
      }
      else {
        uVar6 = puVar2[1];
        __src = (void *)puVar2[2];
        if (uVar6 < 0x17) {
          __dest = (void *)((ulong)&local_130 | 1);
          local_130 = CONCAT71(local_130._1_7_,(char)((int)uVar6 << 1));
        }
        else {
          if (0xffffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          uVar7 = uVar6 + 0x10 & 0xfffffffffffffff0;
          __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar7);
          local_130 = uVar7 | 1;
          uStack_128 = uVar6;
          local_120 = __dest;
        }
        memcpy(__dest,__src,uVar6 + 1);
      }
      uStack_108 = local_130 >> 1 & 0x7f;
      local_110 = (void *)((ulong)&local_130 | 1);
      if ((local_130 & 1) != 0) {
        uStack_108 = uStack_128;
        local_110 = local_120;
      }
                    /* try { // try from 00337fc8 to 00337fdf has its CatchHandler @ 00338004 */
      FUN_00395b50(param_1,&local_80,&local_b0,&local_e0,&local_110);
      if ((local_130 & 1) == 0) {
        return;
      }
      FUN_0049e790(PTR_LAB_047cba48,local_120);
      return;
    }
    if (puVar2 == (ulong *)0x0) goto LAB_00337dc4;
    FUN_003673f0(&local_80,"field:name error:method name populated without service name");
    uVar4 = 0xc2;
  }
  else {
    FUN_003673f0(&local_80,"field:name error:type is not object");
    uVar4 = 0x9e;
  }
LAB_00337db0:
  uVar4 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/service_config.cc"
                       ,uVar4,&local_80,0,0);
  *param_3 = uVar4;
LAB_00337dc4:
  *param_1 = 0;
  return;
}


