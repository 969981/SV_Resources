/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0014e5a0; name: FUN_0014e5a0
 */


void FUN_0014e5a0(undefined8 param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  clock_t cVar4;
  time_t tVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_2 < param_3) {
    do {
      FUN_00122990(param_1,1,param_2);
      FUN_00122990(param_1,1,param_3);
      iVar3 = FUN_0014e9c0(param_1,0xffffffff,0xfffffffe);
      if (iVar3 == 0) {
        FUN_00c5db00(param_1,0xfffffffd);
      }
      else {
        FUN_00122e70(param_1,1,param_2);
        FUN_00122e70(param_1,1,param_3);
      }
      uVar1 = param_3 - param_2;
      if (uVar1 == 1) {
        return;
      }
      if ((uVar1 < 100) || (param_4 == 0)) {
        uVar6 = param_3 + param_2 >> 1;
      }
      else {
        uVar6 = uVar1 >> 2;
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = param_4 / (uVar6 * 2);
        }
        uVar6 = uVar6 + param_2 + (param_4 - uVar8 * uVar6 * 2);
      }
      FUN_00122990(param_1,1,uVar6);
      FUN_00122990(param_1,1,param_2);
      iVar3 = FUN_0014e9c0(param_1,0xfffffffe,0xffffffff);
      if (iVar3 == 0) {
        FUN_00c5db00(param_1,0xfffffffe);
        FUN_00122990(param_1,1,param_3);
        iVar3 = FUN_0014e9c0(param_1,0xffffffff,0xfffffffe);
        if (iVar3 == 0) {
          FUN_00c5db00(param_1,0xfffffffd);
        }
        else {
          FUN_00122e70(param_1,1,uVar6);
          FUN_00122e70(param_1,1,param_3);
        }
      }
      else {
        FUN_00122e70(param_1,1,uVar6);
        FUN_00122e70(param_1,1,param_2);
      }
      if (uVar1 == 2) {
        return;
      }
      FUN_00122990(param_1,1,uVar6);
      FUN_00d341e0(param_1,0xffffffff);
      uVar1 = param_3 - 1;
      FUN_00122990(param_1,1,uVar1);
      uVar7 = param_2;
      uVar8 = uVar1;
      do {
        FUN_00122e70(param_1,1,uVar6);
        FUN_00122e70(param_1,1,uVar8);
        uVar6 = uVar7 + 1;
        FUN_00122990(param_1,1,uVar6);
        iVar3 = FUN_0014e9c0(param_1,0xffffffff,0xfffffffe);
        if (iVar3 != 0) {
          uVar7 = uVar7 + 2;
          do {
            uVar6 = uVar7;
            if (param_3 == uVar6) {
              FUN_00123a70(param_1,"invalid order function for sorting");
            }
            FUN_00c5db00(param_1,0xfffffffe);
            FUN_00122990(param_1,1,uVar6);
            iVar3 = FUN_0014e9c0(param_1,0xffffffff,0xfffffffe);
            uVar7 = uVar6 + 1;
          } while (iVar3 != 0);
        }
        uVar8 = uVar8 - 1;
        FUN_00122990(param_1,1,uVar8);
        iVar3 = FUN_0014e9c0(param_1,0xfffffffd,0xffffffff);
        bVar2 = uVar8 < uVar6;
        if (iVar3 != 0) {
          do {
            if (bVar2) {
              FUN_00123a70(param_1,"invalid order function for sorting");
            }
            FUN_00c5db00(param_1,0xfffffffe);
            uVar8 = uVar8 - 1;
            FUN_00122990(param_1,1,uVar8);
            iVar3 = FUN_0014e9c0(param_1,0xfffffffd,0xffffffff);
            bVar2 = uVar8 < uVar6;
          } while (iVar3 != 0);
        }
        uVar7 = uVar6;
      } while (!bVar2);
      FUN_00c5db00(param_1,0xfffffffe);
      FUN_00122e70(param_1,1,uVar1);
      FUN_00122e70(param_1,1,uVar6);
      uVar1 = uVar6 - param_2;
      uVar8 = param_3 - uVar6;
      if (uVar1 < uVar8) {
        FUN_0014e5a0(param_1,param_2,uVar6 - 1,param_4);
        param_2 = uVar6 + 1;
        if (uVar1 < param_3 - param_2 >> 7) goto LAB_0014e97c;
      }
      else {
        FUN_0014e5a0(param_1,uVar6 + 1,param_3,param_4);
        param_3 = uVar6 - 1;
        if (uVar8 < param_3 - param_2 >> 7) {
LAB_0014e97c:
          cVar4 = clock();
          tVar5 = time((time_t *)0x0);
          param_4 = (int)((ulong)cVar4 >> 0x20) + (int)cVar4 + (int)tVar5 +
                    (int)((ulong)tVar5 >> 0x20);
        }
      }
    } while (param_2 < param_3);
  }
  return;
}


