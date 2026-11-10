/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00617974; name: FUN_00617974
 */


ulong * FUN_00617974(long *param_1,ulong *param_2)

{
  void *pvVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar4 = *param_1;
  if (lVar4 == 0) {
    puVar2 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,0x38);
    if (puVar2 != (ulong *)0x0) {
      if ((*param_2 & 1) == 0) {
        uVar5 = param_2[1];
        uVar6 = *param_2;
        puVar2[2] = param_2[2];
        puVar2[1] = uVar5;
        *puVar2 = uVar6;
      }
      else {
        uVar6 = param_2[1];
        pvVar1 = (void *)param_2[2];
        if (uVar6 < 0x17) {
          puVar3 = (undefined1 *)((long)puVar2 + 1);
          *(char *)puVar2 = (char)((int)uVar6 << 1);
        }
        else {
          if (0xffffffffffffffef < uVar6) goto LAB_00617afc;
          uVar5 = uVar6 + 0x10 & 0xfffffffffffffff0;
          puVar3 = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar5);
          puVar2[1] = uVar6;
          puVar2[2] = (ulong)puVar3;
          *puVar2 = uVar5 | 1;
        }
        memcpy(puVar3,pvVar1,uVar6 + 1);
      }
      FUN_004eb008(puVar2 + 3,0);
    }
  }
  else {
    if (*(long *)(lVar4 + 0x70) != 0) {
      FUN_00520d08(lVar4,0,0x38);
    }
    puVar2 = (ulong *)FUN_00520c00(lVar4,0x38);
    lVar4 = *param_1;
    if ((*param_2 & 1) == 0) {
      uVar5 = param_2[1];
      uVar6 = *param_2;
      puVar2[2] = param_2[2];
      puVar2[1] = uVar5;
      *puVar2 = uVar6;
    }
    else {
      uVar6 = param_2[1];
      pvVar1 = (void *)param_2[2];
      if (uVar6 < 0x17) {
        puVar3 = (undefined1 *)((long)puVar2 + 1);
        *(char *)puVar2 = (char)((int)uVar6 << 1);
      }
      else {
        if (0xffffffffffffffef < uVar6) {
LAB_00617afc:
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        uVar5 = uVar6 + 0x10 & 0xfffffffffffffff0;
        puVar3 = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar5);
        puVar2[1] = uVar6;
        puVar2[2] = (ulong)puVar3;
        *puVar2 = uVar5 | 1;
      }
      memcpy(puVar3,pvVar1,uVar6 + 1);
    }
    FUN_0025a77c(lVar4,puVar2);
    FUN_004eb008(puVar2 + 3,*param_1);
  }
  return puVar2;
}


