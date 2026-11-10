/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0125b070; name: FUN_0125b070
 */


void FUN_0125b070(long *param_1,long *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  code *local_70;
  undefined8 uStack_68;
  
  puVar3 = PTR_DAT_047d3988;
  puVar2 = PTR_DAT_047d3980;
  if (param_1 != param_2) {
    do {
      if (*param_1 != 0) {
        plVar8 = (long *)(*param_1 + 8);
        plVar5 = (long *)(**(code **)*plVar8)(plVar8);
        if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar2), iVar4 != 0)) {
          uVar7 = FUN_01adab84();
          *(undefined8 *)puVar3 = uVar7;
          __cxa_guard_release(puVar2);
        }
        for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
          if (plVar5 == (long *)puVar3) {
            uVar6 = (**(code **)(*(long *)*param_1 + 0xc0))();
            if ((uVar6 & 1) == 0) {
              cVar1 = *(char *)*param_3;
              local_70 = FUN_02b6105c;
              uStack_68 = 0;
              plVar5 = (long *)(**(code **)(*plVar8 + 0x38))(plVar8,&local_70);
              if (local_70 != (code *)0x0) {
                (*local_70)(0,&local_70,0,0,0);
              }
              if (plVar5 != (long *)0x0) {
                (**(code **)(*plVar5 + 0x38))(plVar5,cVar1 != '\0');
              }
            }
            break;
          }
        }
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return;
}


