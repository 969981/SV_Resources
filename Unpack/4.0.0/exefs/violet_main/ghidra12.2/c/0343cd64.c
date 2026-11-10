/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0343cd64; name: FUN_0343cd64
 */


undefined8 FUN_0343cd64(long param_1,ulong param_2,char param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x288));
  puVar3 = PTR_DAT_047e2fd0;
  plVar6 = (long *)*param_4;
  if (plVar6 != (long *)0x0) {
    if ((param_2 & 1) == 0) {
      plVar8 = (long *)0x0;
      do {
        if ((char)plVar6[0xd] == '\0') {
          plVar9 = (long *)plVar6[2];
LAB_0343cefc:
          plVar8 = plVar6;
          plVar6 = plVar9;
        }
        else {
          uVar4 = (**(code **)(*plVar6 + 0x10))(plVar6);
          plVar9 = (long *)plVar6[2];
          if ((uVar4 & 1) == 0) goto LAB_0343cefc;
          plVar7 = param_4;
          if ((long *)*param_4 != plVar6) {
            plVar7 = plVar8 + 2;
          }
          *plVar7 = (long)plVar9;
          (**(code **)*plVar6)(plVar6);
          (**(code **)(puVar3 + 0x30))(7,plVar6);
          plVar6 = plVar9;
        }
      } while (plVar6 != (long *)0x0);
    }
    else {
      plVar8 = (long *)0x0;
      plVar9 = (long *)0x0;
      do {
        plVar7 = plVar6;
        if ((char)plVar7[0xd] == '\0') {
          cVar2 = param_3;
          if (plVar8 == (long *)0x0) {
joined_r0x0343ce38:
            if (*(char *)((long)plVar7 + 100) < cVar2) {
              nn::os::LockMutex((MutexType *)(plVar7 + 5));
              cVar2 = *(char *)((long)plVar7 + 0x6c);
              nn::os::UnlockMutex((MutexType *)(plVar7 + 5));
              if (cVar2 != '\0') {
                plVar6 = (long *)plVar7[2];
                plVar8 = plVar7;
                goto LAB_0343ce68;
              }
            }
          }
          else if (*(char *)((long)plVar7 + 100) < param_3) {
            cVar2 = *(char *)((long)plVar8 + 100);
            goto joined_r0x0343ce38;
          }
          plVar6 = (long *)plVar7[2];
        }
        else {
          uVar4 = (**(code **)(*plVar7 + 0x10))(plVar7);
          plVar6 = (long *)plVar7[2];
          if ((uVar4 & 1) != 0) {
            plVar1 = param_4;
            if ((long *)*param_4 != plVar7) {
              plVar1 = plVar9 + 2;
            }
            *plVar1 = (long)plVar6;
            (**(code **)*plVar7)(plVar7);
            (**(code **)(puVar3 + 0x30))(7,plVar7);
            plVar7 = plVar9;
          }
        }
LAB_0343ce68:
        plVar9 = plVar7;
      } while (plVar6 != (long *)0x0);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x18))(plVar8);
        uVar5 = 1;
        goto LAB_0343cf0c;
      }
    }
  }
  uVar5 = 0;
LAB_0343cf0c:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x288));
  return uVar5;
}


