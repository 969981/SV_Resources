/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008084bc; name: FUN_008084bc
 */


void FUN_008084bc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  uVar3 = FUN_00808400();
  if ((uVar3 & 1) == 0) {
    local_38[0] = 0x1040c;
  }
  else {
    uVar3 = FUN_008084a0();
    puVar1 = PTR_DAT_047d15d8;
    if ((uVar3 & 1) == 0) {
      local_38[0] = 0x10408;
    }
    else if (*(long *)PTR_DAT_047d15d8 == 0) {
      uVar4 = FUN_0078a12c();
      plVar5 = (long *)FUN_007bfa40(0x1f58,uVar4,8);
      if (plVar5 == (long *)0x0) {
        local_38[0] = 0x10401;
        *(undefined8 *)PTR_DAT_047d1748 = 0;
      }
      else {
        lVar6 = 0;
        do {
          *(undefined4 *)((long)plVar5 + lVar6) = 0;
          lVar6 = lVar6 + 4;
        } while (lVar6 != 0x1f58);
        *(long **)PTR_DAT_047d1748 = plVar5;
        FUN_007fcbe4(plVar5);
        puVar2 = PTR_DAT_047d1750;
        plVar5[0x27d] = 0;
        *plVar5 = (long)(puVar2 + 0x10);
        FUN_0078cfe4(plVar5 + 0x27e,4);
        *(undefined4 *)(plVar5 + 0x282) = 0;
        plVar5[0x283] = 0;
        plVar5[0x284] = 0;
        FUN_0078ca60(plVar5 + 0x285);
        *(undefined4 *)(plVar5 + 0x28b) = 0;
        FUN_0080ea70(plVar5 + 0x28c);
        *(long **)puVar1 = plVar5;
        local_38[0] = 0;
      }
    }
    else {
      local_38[0] = 0x1040f;
    }
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,local_38);
  return;
}


