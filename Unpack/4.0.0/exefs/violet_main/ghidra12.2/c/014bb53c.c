/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014bb53c; name: FUN_014bb53c
 */


void FUN_014bb53c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  
  uVar2 = FUN_0159fe8c(param_3);
  uVar3 = FUN_014bb63c(param_1);
  if (uVar3 != 0) {
    uVar8 = 0;
    do {
      lVar4 = FUN_014bb644(param_2,uVar8);
      lVar5 = FUN_014c1b7c(param_1,uVar8);
      if ((lVar4 != 0) && (lVar5 != 0)) {
        lVar6 = FUN_014bb634(param_4);
        for (plVar7 = *(long **)(lVar6 + 0x38); plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
          if ((*(uint *)((long)plVar7 + 0x14) == (uVar2 & 0xff)) &&
             ((uint)*(byte *)(plVar7 + 3) == (uVar8 & 0xff))) {
            uVar1 = *(undefined4 *)(plVar7 + 2);
            goto LAB_014bb5ec;
          }
        }
        uVar1 = 0;
LAB_014bb5ec:
        FUN_014bb660(lVar5,lVar4,uVar1,param_3,param_4,uVar2 & 0xff);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar3);
  }
  return;
}


