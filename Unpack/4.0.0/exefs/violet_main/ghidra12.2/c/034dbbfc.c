/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034dbbfc; name: FUN_034dbbfc
 */


void FUN_034dbbfc(undefined4 param_1,long param_2,uint param_3,ulong param_4)

{
  ushort uVar1;
  ushort *puVar2;
  long *plVar3;
  ulong uVar4;
  uint uVar5;
  bool bVar6;
  undefined4 uVar7;
  
  puVar2 = *(ushort **)(param_2 + 0x20);
  if (puVar2 != (ushort *)0x0) {
    uVar1 = *puVar2;
    uVar5 = (uint)uVar1;
    if (uVar1 < 2) {
      uVar5 = 1;
    }
    uVar4 = (ulong)uVar5;
    plVar3 = (long *)((long)puVar2 + ((ulong)((uint)uVar1 * 2 + 5) & 0x3fffc) + 8);
    do {
      puVar2 = puVar2 + 1;
      if ((uint)*puVar2 == (param_3 & 0xffff)) {
        uVar7 = (undefined4)plVar3[-1];
        *(undefined4 *)(plVar3 + -1) = param_1;
        if (((param_4 & 1) == 0) || (*plVar3 == 0)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
          *plVar3 = 0;
        }
        goto LAB_034dbc9c;
      }
      plVar3 = plVar3 + 2;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  bVar6 = false;
  uVar7 = 0x3f800000;
  if ((param_3 >> 0x10 & 0xff) != 3) {
    uVar7 = 0;
  }
LAB_034dbc9c:
  if ((char)(*(long **)(param_2 + 0x18))[1] != '\0') {
    (**(code **)(**(long **)(param_2 + 0x18) + 0x48))(uVar7);
  }
  if (bVar6) {
                    /* WARNING: Could not recover jumptable at 0x034dbcd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_2 + 0x18) + 0x18))();
    return;
  }
  return;
}


