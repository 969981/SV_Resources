/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004b3c30; name: FUN_004b3c30
 */


ulong * FUN_004b3c30(long param_1,byte *param_2,ulong *param_3)

{
  void *__src;
  bool bVar1;
  ulong *puVar2;
  byte *__dest;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  byte *local_d8;
  ulong uStack_d0;
  undefined *local_a8;
  undefined8 uStack_a0;
  ulong *local_78;
  ulong uStack_70;
  ulong local_48;
  ulong uStack_40;
  ulong local_38;
  
  lVar4 = *(long *)(param_1 + 8);
  uVar5 = (ulong)(*param_2 >> 1);
  if ((*param_2 & 1) != 0) {
    uVar5 = *(ulong *)(param_2 + 8);
  }
  if (uVar5 == 0) {
    puVar2 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,0x18);
    if (puVar2 != (ulong *)0x0) {
      if ((*param_3 & 1) == 0) {
        uVar3 = param_3[1];
        uVar5 = *param_3;
        puVar2[2] = param_3[2];
        puVar2[1] = uVar3;
        *puVar2 = uVar5;
      }
      else {
        uVar5 = param_3[1];
        __src = (void *)param_3[2];
        if (uVar5 < 0x17) {
          __dest = (byte *)((long)puVar2 + 1);
          *(byte *)puVar2 = (byte)((int)uVar5 << 1);
        }
        else {
          if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          uVar3 = uVar5 + 0x10 & 0xfffffffffffffff0;
          __dest = (byte *)FUN_0049e770(PTR_FUN_047cba38,uVar3);
          puVar2[1] = uVar5;
          puVar2[2] = (ulong)__dest;
          *puVar2 = uVar3 | 1;
        }
        memcpy(__dest,__src,uVar5 + 1);
      }
    }
    local_78 = puVar2;
    FUN_004a3dc0(lVar4 + 0xd0,&local_78);
  }
  else {
    puVar2 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,0x18);
    if (puVar2 != (ulong *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
    }
    local_78 = puVar2;
    FUN_004a3dc0(lVar4 + 0xd0,&local_78);
    bVar1 = (*param_2 & 1) == 0;
    local_78 = *(ulong **)(param_2 + 0x10);
    if (bVar1) {
      local_78 = (ulong *)(param_2 + 1);
    }
    uStack_70 = (ulong)(*param_2 >> 1);
    if (!bVar1) {
      uStack_70 = *(ulong *)(param_2 + 8);
    }
    local_a8 = &DAT_03bdface;
    uStack_a0 = 1;
    local_d8 = (byte *)param_3[2];
    bVar1 = ((byte)*param_3 & 1) == 0;
    if (bVar1) {
      local_d8 = (byte *)((long)param_3 + 1);
    }
    uStack_d0 = (ulong)(byte)((byte)*param_3 >> 1);
    if (!bVar1) {
      uStack_d0 = param_3[1];
    }
    FUN_00533f60(&local_48,&local_78,&local_a8,&local_d8);
    if ((*puVar2 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,puVar2[2]);
    }
    puVar2[2] = local_38;
    puVar2[1] = uStack_40;
    *puVar2 = local_48;
  }
  return puVar2;
}


