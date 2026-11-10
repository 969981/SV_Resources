/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0341ec54; name: FUN_0341ec54
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_0341ec54(long param_1,float *param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  uint uVar9;
  undefined *puVar10;
  long lVar11;
  size_t sVar12;
  void *__dest;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  char *__s;
  ulong __n;
  long lVar18;
  long local_50;
  undefined4 local_48;
  float local_44;
  
  __s = *(char **)(param_2 + 10);
  if ((*(long *)(param_1 + 0x40) != 0) && (*(char *)(param_1 + 0x48) != '\0')) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9);
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  *(char **)(param_1 + 0x40) = __s;
  if ((__s != (char *)0x0) && (*(char *)(param_1 + 0x48) == '\0')) {
    sVar12 = strlen(__s);
    if ((int)sVar12 == 0) {
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    else {
      __n = (ulong)((int)sVar12 + 1);
      __dest = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(9,__n);
      *(void **)(param_1 + 0x40) = __dest;
      if (__dest != (void *)0x0) {
        memcpy(__dest,__s,__n);
        *(undefined1 *)(param_1 + 0x48) = 1;
      }
    }
  }
  fVar1 = param_2[6];
  *(float *)(param_1 + 0x90) = fVar1;
  *(float *)(param_1 + 0x94) = param_2[7];
  *(float *)(param_1 + 0x9c) = param_2[8];
  fVar2 = *param_2;
  *(float *)(param_1 + 0x24) = fVar2;
  fVar3 = param_2[1];
  *(float *)(param_1 + 0x28) = fVar3;
  fVar4 = param_2[2];
  *(float *)(param_1 + 0x2c) = fVar4;
  fVar5 = param_2[3];
  *(float *)(param_1 + 0x18) = fVar5;
  fVar6 = param_2[4];
  *(float *)(param_1 + 0x1c) = fVar6;
  fVar7 = param_2[5];
  *(float *)(param_1 + 0x20) = fVar7;
  *(float *)(param_1 + 0xc) = fVar6 * fVar4 - fVar7 * fVar3;
  *(float *)(param_1 + 0x10) = fVar7 * fVar2 - fVar5 * fVar4;
  *(float *)(param_1 + 0x14) = fVar5 * fVar3 - fVar6 * fVar2;
  *(float *)(param_1 + 0xa4) = param_2[0xe];
  if (*(char *)(param_2 + 0xf) != '\0') {
    if (*(char *)(param_1 + 0xb8) == '\0') {
      lVar11 = -4;
      if (*(long *)(param_1 + 0x70) != -1) {
        lVar11 = *(long *)(param_1 + 0x70);
      }
      lVar11 = FUN_0341d9c0(param_1,lVar11,fVar1,param_3);
      puVar10 = PTR_DAT_047e6cc0;
      if (lVar11 != 0) {
        *(undefined1 *)(param_1 + 0xb8) = 1;
        lVar15 = *(long *)puVar10;
        lVar18 = -4;
        if (*(long *)(param_1 + 0x70) != -1) {
          lVar18 = *(long *)(param_1 + 0x70);
        }
        uVar14 = *(uint *)(lVar15 + 0x38);
        if (uVar14 != 0) {
          uVar9 = 0;
          if (uVar14 != 0) {
            uVar9 = (uint)lVar18 / uVar14;
          }
          for (plVar16 = *(long **)(*(long *)(lVar15 + 0x30) +
                                   (ulong)((uint)lVar18 - uVar9 * uVar14) * 8);
              plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
            if (plVar16[1] == lVar18) {
              lVar18 = *(long *)(plVar16[2] + 0x28);
              if (lVar18 != 0) {
                if (*(short *)(lVar18 + 0x38) != 0) {
                  if (*(long *)(lVar18 + 0x20) == 0) {
LAB_0341ef98:
                    memcpy((void *)0x0,(void *)0x0,0x24);
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
                  *(undefined2 *)(lVar18 + 0x38) = 0;
                  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
                  *(undefined8 *)(lVar18 + 0x20) = 0;
                  if (*(short *)(lVar18 + 0x38) != 0) goto LAB_0341ef98;
                }
                *(byte *)(lVar18 + 0x3a) = *(byte *)(lVar18 + 0x3a) & 0xf8 | 2;
                *(byte *)(lVar18 + 0x54) = *(byte *)(lVar18 + 0x54) | 1;
              }
              break;
            }
          }
        }
        if (*(float *)(param_1 + 0xa4) <= 0.0) {
          uVar13 = 0;
        }
        else {
          local_50 = -4;
          if (*(long *)(param_1 + 0x70) != -1) {
            local_50 = *(long *)(param_1 + 0x70);
          }
          local_48 = *(undefined4 *)(param_1 + 0x90);
          local_44 = *(float *)(param_1 + 0x94) * *(float *)(param_1 + 0xa4);
          uVar13 = 1;
        }
        FUN_034c6e50(*(undefined8 *)puVar10,lVar11,&local_50,uVar13,1);
      }
    }
    goto LAB_0341ef74;
  }
  if ((*(char *)(param_1 + 0xb8) == '\0') ||
     (puVar17 = *(undefined8 **)(param_1 + 0x68), puVar17 == (undefined8 *)0x0)) goto LAB_0341ef74;
  iVar8 = *(int *)(puVar17 + 0x10);
  uVar14 = iVar8 - 1;
  *(uint *)(puVar17 + 0x10) = uVar14;
  if (iVar8 == 0 || uVar14 == 0) {
    if (uVar14 == 0) {
LAB_0341ee4c:
      lVar11 = puVar17[5];
      if (lVar11 != 0) {
        uVar14 = ((uint)lVar11 ^ (uint)lVar11 >> 0x10) * -0x7a143595;
        uVar14 = (uVar14 ^ uVar14 >> 0xd) * -0x3d4d51cb;
        local_50 = lVar11;
        FUN_034c6294(&DAT_048b02b8,&local_50,uVar14 ^ uVar14 >> 0x10);
        uVar14 = *(uint *)(puVar17 + 0x10);
      }
      goto LAB_0341ee90;
    }
  }
  else if (uVar14 < 2) {
    if (*(char *)((long)puVar17 + 0x84) != '\0') goto LAB_0341ee4c;
LAB_0341ee90:
    if (uVar14 == 0) {
      (**(code **)*puVar17)(puVar17);
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4,puVar17);
    }
  }
  *(undefined1 *)(param_1 + 0xb8) = 0;
LAB_0341ef74:
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0x10);
  return;
}


