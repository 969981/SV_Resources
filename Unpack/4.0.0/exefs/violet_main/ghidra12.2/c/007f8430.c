/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f8430; name: FUN_007f8430
 */


void FUN_007f8430(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  int local_548 [8];
  ulong local_528;
  undefined8 local_520;
  undefined8 *local_518;
  undefined8 local_508;
  undefined8 uStack_500;
  int local_4f8;
  int local_4f4;
  undefined8 *local_4f0;
  undefined4 local_4e8;
  undefined8 local_4e4;
  undefined8 local_4dc;
  undefined4 local_58 [2];
  
  if (param_3 == 0) {
    uVar5 = 0x10407;
  }
  else {
    plVar2 = *(long **)(param_2 + 0x48);
    if (plVar2 != (long *)0x0) {
      if (*(int *)(param_2 + 0x6f0) == 0) {
        if (*(int *)(param_2 + 0x10) == 0) {
                    /* WARNING: Could not recover jumptable at 0x007f869c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar2 + 0x10))(param_1,plVar2,param_3);
          return;
        }
      }
      else if (*(int *)(param_2 + 0x10) == 0) {
        uVar5 = 0x2c09;
        goto LAB_007f8494;
      }
      local_520 = 0;
      local_518 = (undefined8 *)0x0;
      FUN_0078f9d4(&local_520);
      local_508 = 0;
      uStack_500 = 0;
      FUN_0078f9d4(&local_508);
      local_4f0 = &local_4e4;
      local_4f4 = 0;
      local_4e8 = 0x18;
      local_4e4 = 0;
      local_4dc = 0;
      FUN_0078f9e0(&local_508,&local_508);
      lVar7 = 0;
      do {
        puVar6 = (undefined8 *)((long)local_4f0 + lVar7 + 0x30);
        *puVar6 = 0;
        *(undefined8 *)((long)local_4f0 + lVar7 + 0x38) = 0;
        FUN_0078f9e0(&local_508,&local_508,(long)local_4f4 + (long)puVar6);
        lVar7 = lVar7 + 0x30;
      } while (lVar7 != 0x450);
      local_528 = 0;
      FUN_007935cc(&local_528);
      lVar7 = *(long *)(param_2 + 8);
      if (lVar7 != param_2) {
        do {
          for (puVar6 = local_518; puVar6 != &local_520; puVar6 = (undefined8 *)puVar6[1]) {
            uVar3 = FUN_007967e8(puVar6 + 2,lVar7 + 0x638);
            if ((uVar3 & 1) != 0) goto LAB_007f85a8;
          }
          if (*(ulong *)(lVar7 + 0x660) < local_528) {
            FUN_00797268(param_3,lVar7 + 0x10);
            FUN_00796f04(local_548,param_3);
            if (local_548[0] == 0) {
              FUN_007971bc(lVar7 + 0x10);
              FUN_0078fa2c(param_2,lVar7);
              FUN_0078fa04(param_2 + 0x18,param_2 + 0x18,lVar7 + *(int *)(param_2 + 0x2c));
              local_548[0] = 0;
              goto LAB_007f8638;
            }
            break;
          }
          if (local_4f8 == 0) {
            lVar8 = 0;
          }
          else {
            lVar8 = FUN_0078fac8(&local_508);
            lVar1 = 0;
            if (lVar8 != 0) {
              lVar1 = lVar8 - local_4f4;
            }
            lVar8 = lVar1 + 0x10;
            FUN_00796584(lVar8);
            FUN_0078f9e0(&local_520,&local_520,lVar1);
          }
          FUN_00796868(local_548,lVar7 + 0x638);
          FUN_007968fc(lVar8,local_548);
          FUN_0284e3d4(local_548);
LAB_007f85a8:
          lVar7 = *(long *)(lVar7 + 8);
        } while (lVar7 != param_2);
      }
      local_548[0] = 0x2c09;
LAB_007f8638:
      local_58[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_548 | 4),(Result *)local_58);
      piVar4 = local_548;
      goto LAB_007f8648;
    }
    uVar5 = 0x10408;
  }
LAB_007f8494:
  local_520 = CONCAT44(local_520._4_4_,uVar5);
  local_548[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_520 | 4),(Result *)local_548);
  piVar4 = (int *)&local_520;
LAB_007f8648:
  FUN_00cbd7c0(param_1,piVar4);
  return;
}


