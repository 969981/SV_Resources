/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004ab0fc; name: FUN_004ab0fc
 */


void FUN_004ab0fc(long param_1,ulong param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong local_68;
  undefined *local_60;
  ulong *puStack_58;
  undefined **local_48;
  
  if (param_2 != 0) {
    plVar6 = (long *)(param_1 + 0x68);
    plVar7 = (long *)*plVar6;
    if (plVar7 == (long *)0x0) {
      plVar8 = plVar6;
    }
    else {
      plVar6 = (long *)(param_1 + 0x68);
      while( true ) {
        while( true ) {
          plVar8 = plVar7;
          if ((ulong)plVar7[4] <= param_2) break;
          if ((long *)*plVar7 == (long *)0x0) {
            lVar5 = *plVar7;
            goto joined_r0x004ab170;
          }
          plVar6 = plVar7;
          plVar7 = (long *)*plVar7;
        }
        if (param_2 <= (ulong)plVar7[4]) break;
        plVar6 = plVar7 + 1;
        if ((long *)*plVar6 == (long *)0x0) break;
        plVar7 = (long *)*plVar6;
      }
    }
    lVar5 = *plVar6;
    plVar7 = plVar6;
joined_r0x004ab170:
    if (lVar5 == 0) {
      puVar3 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x28);
      puVar3[4] = param_2;
      puVar3[2] = plVar8;
      *puVar3 = 0;
      puVar3[1] = 0;
      *plVar7 = (long)puVar3;
      if (**(long **)(param_1 + 0x60) != 0) {
        *(long *)(param_1 + 0x60) = **(long **)(param_1 + 0x60);
        puVar3 = (undefined8 *)*plVar7;
      }
      FUN_010108e0(*(undefined8 *)(param_1 + 0x68),puVar3);
      *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + 1;
      puVar2 = PTR_FUN_047cd758;
      if (0 < *(int *)(param_2 + 0x24)) {
        lVar5 = 0;
        do {
          iVar1 = *(int *)(*(long *)(param_2 + 0x58) + lVar5 * 4);
          puVar4 = *(ulong **)(param_2 + 0x18);
          if ((puVar4 != (ulong *)0x0) && (local_68 = param_2, *puVar4 != 0xffffffffffffffff)) {
            local_60 = puVar2;
            puStack_58 = &local_68;
            local_48 = &local_60;
            std::__call_once(puVar4,&local_48,(_func_void_void_ptr *)&LAB_004c9510);
          }
          FUN_004ab0fc(param_1,*(undefined8 *)(*(long *)(param_2 + 0x48) + (long)iVar1 * 8));
          lVar5 = lVar5 + 1;
        } while (lVar5 < *(int *)(param_2 + 0x24));
      }
    }
  }
  return;
}


