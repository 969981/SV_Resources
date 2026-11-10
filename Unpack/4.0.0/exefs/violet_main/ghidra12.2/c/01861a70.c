/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01861a70; name: FUN_01861a70
 */


long * FUN_01861a70(long *param_1,long *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  long *plVar9;
  undefined1 *puVar10;
  
  puVar3 = PTR_DAT_047d3e30;
  puVar2 = PTR_DAT_047d3e28;
  if (param_1 != param_2) {
    do {
      lVar6 = *param_1;
      if (((lVar6 != 0) && (uVar5 = FUN_01411014(lVar6 + 8), (uVar5 & 1) != 0)) &&
         (uVar5 = (**(code **)(*(long *)*param_1 + 0xc0))(), (uVar5 & 1) == 0)) {
        pbVar7 = *(byte **)*param_3;
        if (pbVar7 == (byte *)0x0) {
          if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar2), iVar4 != 0)) {
            FUN_00100190(PTR_LAB_047d4118,puVar3,&PTR_LOOP_04483000);
            __cxa_guard_release(puVar2);
          }
          puVar10 = *(undefined1 **)puVar3;
          plVar9 = *(long **)(puVar3 + 0x18);
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x18))(plVar9);
            puVar8 = *(undefined1 **)(lVar6 + 0xd0);
            (**(code **)(*plVar9 + 0x20))(plVar9);
            if (puVar10 == puVar8) {
              return param_1;
            }
            goto LAB_01861b20;
          }
        }
        else {
          bVar1 = *pbVar7;
          if (bVar1 == 0) {
            puVar10 = &DAT_cbf29ce484222645;
          }
          else {
            puVar10 = &DAT_cbf29ce484222645;
            do {
              pbVar7 = pbVar7 + 1;
              puVar10 = (undefined1 *)(((ulong)puVar10 ^ (ulong)bVar1) * 0x100000001b3);
              bVar1 = *pbVar7;
            } while (bVar1 != 0);
          }
        }
        if (puVar10 == *(undefined1 **)(lVar6 + 0xd0)) {
          return param_1;
        }
      }
LAB_01861b20:
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
    param_1 = param_2;
  }
  return param_1;
}


