/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0048d020; name: FUN_0048d020
 */


undefined8 FUN_0048d020(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  long *plVar6;
  
  plVar6 = *(long **)(param_1 + 0x100);
  iVar1 = FUN_0047e430(param_2);
  if (iVar1 == 0) {
LAB_0048d12c:
    *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | 0x800;
    uVar5 = 0xffffffff;
  }
  else {
    iVar1 = FUN_0047e430(param_2);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        puVar3 = (undefined8 *)FUN_0047e450(param_2,iVar1);
        iVar2 = FUN_0045bea0(puVar3[1]);
        if ((iVar2 == 0x2ea) || (iVar2 = FUN_0045bea0(*puVar3), iVar2 == 0x2ea)) goto LAB_0048d12c;
        puVar4 = (uint *)FUN_0048ce40(plVar6,*puVar3);
        if (puVar4 == (uint *)0x0) {
          if ((uint *)*plVar6 != (uint *)0x0) {
            puVar4 = (uint *)FUN_0048cf00(0,*puVar3,*(uint *)*plVar6 & 0x10);
            if (puVar4 != (uint *)0x0) {
              *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(*plVar6 + 0x10);
              *puVar4 = *puVar4 | 6;
              iVar2 = FUN_0047e2f0(plVar6[1],puVar4);
              if (iVar2 != 0) goto LAB_0048d0fc;
              FUN_0048cea0(puVar4);
            }
            goto LAB_0048d16c;
          }
        }
        else {
          *puVar4 = *puVar4 | 1;
LAB_0048d0fc:
          iVar2 = FUN_0047e2f0(*(undefined8 *)(puVar4 + 6),puVar3[1]);
          if (iVar2 == 0) {
LAB_0048d16c:
            uVar5 = 0;
            goto LAB_0048d13c;
          }
          puVar3[1] = 0;
        }
        iVar1 = iVar1 + 1;
        iVar2 = FUN_0047e430(param_2);
      } while (iVar1 < iVar2);
    }
    uVar5 = 1;
  }
LAB_0048d13c:
  FUN_0047e3b0(param_2,PTR_LAB_047cd5d8);
  return uVar5;
}


