/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010b0194; name: FUN_010b0194
 */


void FUN_010b0194(undefined8 *param_1,undefined8 *param_2)

{
  short *psVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *__s;
  
  *param_1 = &PTR_LAB_04600158;
  param_1[1] = *param_2;
  param_1[2] = param_2[1];
  param_1[3] = param_2[2];
  param_1[4] = param_2[3];
  param_1[5] = param_2[4];
  param_1[6] = param_2[5];
  lVar8 = param_2[6];
  param_1[7] = lVar8;
  if (lVar8 != 0) {
    lVar8 = *(long *)(lVar8 + 0x30);
    if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      *(undefined8 *)(lVar8 + 8) = uVar7;
      *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  param_1[8] = param_2[7];
  param_1[9] = param_2[8];
  param_1[10] = param_2[9];
  FUN_010aeb40(param_1 + 0xb);
  puVar3 = param_1 + 0xa17;
  __s = puVar3;
  do {
    memset(__s,0,0x180);
    *(undefined1 *)(__s + 0x2c) = 5;
    *(undefined8 *)((long)__s + 0x164) = 0;
    *(undefined1 *)((long)__s + 0x16c) = 0;
    *(undefined2 *)((long)__s + 0x16e) = 10;
    *(undefined4 *)(__s + 0x2e) = 0xa0a0a0a;
    *(undefined1 *)((long)__s + 0x174) = 10;
    *(undefined2 *)(__s + 0x2f) = 0;
    puVar2 = __s + 0x30;
    *(undefined1 *)((long)__s + 0x17a) = 0;
    *(undefined2 *)((long)__s + 0x17c) = 0;
    __s = puVar2;
  } while (puVar2 != param_1 + 0xec7);
  FUN_013702c0(puVar3);
  *(undefined2 *)((long)param_1 + 0xc4a3) = 0;
  *(undefined1 *)((long)param_1 + 0xc4a5) = 0;
  memset(param_1 + 0xb,0,0xc410);
  FUN_013702c0(puVar3);
  memset(param_1 + 0xec8,0,0x4e24);
  *(undefined8 *)((long)param_1 + 0xc484) = 0;
  *(undefined8 *)((long)param_1 + 0xc48c) = 0;
  *(undefined8 *)((long)param_1 + 0xc494) = 0;
  *(undefined4 *)((long)param_1 + 0xc49c) = 0;
  param_1[0x188f] = 0;
  *(undefined2 *)(param_1 + 0x1890) = 0;
  param_1[0x188d] = 0;
  param_1[0x188e] = 0;
  return;
}


